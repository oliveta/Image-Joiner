#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QPainter>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    rgbSwap=ui->rgbSwap;
folderInput=ui->folderInput;
selectFolder=ui->selectFolder;
mergeDirection=ui->mergeDirection;
indent=ui->indent;
resize=ui->resize;
addToFile=ui->addToFile;
selectFile=ui->selectFile;
addPosition=ui->addPosition;
fileOutput=ui->fileOutput;
proceed=ui->proceed;
QStringList list,list1,list2;
list<<"horizontal"<<"vertical";
mergeDirection->addItems(list);
list1<<"left"<<"right"<<"top"<<"bottom";
addPosition->addItems(list1);
mergeDirection->setCurrentIndex(0);
addPosition->setCurrentIndex(0);
setWindowTitle(tr("Image Joiner"));
format=ui->format;
list2<<"jpg"<<"png"<<"bmp";
format->addItems(list2);
format->setCurrentIndex(0);
message=new QMessageBox;
}

void Widget::on_selectFolder_clicked()
{

    QString dirname = QFileDialog::getExistingDirectory(this, "","",QFileDialog::ShowDirsOnly);//getting the file name
    folderInput->setText(dirname);

}

void Widget::on_selectFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this);//getting the file name
    addToFile->setText(filename);
}

void Widget::on_proceed_clicked()
{


QDir dir(folderInput->text());
if (dir.exists() && dir.isReadable() && fileOutput->text()!="" )

{
QStringList filters;
filters << "*.jpg" << "*.jpeg" << "*.tiff" <<"*.png";
dir.setNameFilters(filters);
dir.setSorting(QDir::Name);
QStringList files=dir.entryList();
QProgressDialog progress("Merging images...", "Abort", 0, files.size(), this);
progress.open();
progress.setMinimumDuration(120);

//counting height&width of the resulting file
int width=0, height=0;
int ind=0,resize_width=0;
double q=1.0;
if (indent->text().count(QRegExp("[^1234567890]"))==0) ind=indent->text().toInt();
if (resize->text().count(QRegExp("[^1234567890]"))==0) resize_width=resize->text().toInt();

for (int i=0;i<files.size();i++)
    {

    QImage file(dir.filePath(files[i]));

    if (resize_width!=0)
    {
     q=(double)resize_width/file.width();
    }
    if (mergeDirection->currentIndex()==0)
    {
     if (file.height()>height) height=(int)file.height()*q;
     width+=(int)file.width()*q+ind;
    }
    else {
        if (file.width()>width) width=(int)file.width()*q;
        height+=(int)file.height()*q+ind;

    }
    }
QImage addFile(addToFile->text());
if (!addFile.isNull()){

    if (addPosition->currentIndex()<=1 )
    {
        width+=addFile.width()+ind;
        if (addFile.height()>height) height=addFile.height();

     }
    else {
       height+=addFile.height()+ind;
       if (addFile.width()>width) width=addFile.width();
    }
}



QImage resultImage=QImage(QSize(width,height),QImage::Format_ARGB32_Premultiplied);
resultImage.fill(qRgb(255,255,255));
QPainter painter(&resultImage);
int pos_x=0,pos_y=0;
if (!addFile.isNull()){ //adding an ADD FILE
    if (addPosition->currentIndex()==0 )
    {
        painter.setCompositionMode(QPainter::CompositionMode_Source);
        painter.drawImage(0,0,addFile);
        pos_x=addFile.width()+ind;

     }
    if (addPosition->currentIndex()==1 )
    {
        painter.setCompositionMode(QPainter::CompositionMode_Source);
        painter.drawImage(width-addFile.width(),0,addFile);


     }
    if (addPosition->currentIndex()==2 )
    {
        painter.setCompositionMode(QPainter::CompositionMode_Source);
        painter.drawImage(0,0,addFile);
        pos_y=addFile.height()+ind;


     }
    if (addPosition->currentIndex()==3 )
    {
        painter.setCompositionMode(QPainter::CompositionMode_Source);
        painter.drawImage(0,height-addFile.height(),addFile);



     }

}
// now add THE REST

for (int i=0;i<files.size();i++)
{
    progress.setValue(i);

    if (progress.wasCanceled())
                 break;
QImage file(dir.filePath(files[i]));
if (!file.isNull())
{
if (resize_width!=0)
{
 q=(double)resize_width/file.width();
}

    painter.setCompositionMode(QPainter::CompositionMode_Source);
    if (rgbSwap->isChecked())
    {
        if (resize_width!=0) painter.drawImage(pos_x,pos_y,file.rgbSwapped().scaledToWidth(resize_width,Qt::SmoothTransformation));
        else painter.drawImage(pos_x,pos_y,file.rgbSwapped());
    }
    else {
    if (resize_width!=0) painter.drawImage(pos_x,pos_y,file.scaledToWidth(resize_width,Qt::SmoothTransformation));
    else painter.drawImage(pos_x,pos_y,file);
}
    if (mergeDirection->currentIndex()==0){
        pos_x+=file.width()*q+ind;

    }
    else {
        pos_y+=file.height()*q+ind;
    }

}
}
 painter.end();
 bool b=0;
 QString filedir=dir.path()+"/"+fileOutput->text()+"."+format->currentText();
 if (format->currentText()=="jpg") b=resultImage.save(filedir,"JPG");
 else if (format->currentText()=="png") b=resultImage.save(filedir,"PNG");
 else b=resultImage.save(filedir,"BMP");






if (b) message->setText("Image <b>"+fileOutput->text()+"."+format->currentText()+"</b> has been created in the directory "+dir.path());
else message->setText("Image has not been created");

 }
else {
 if (!dir.exists() || !dir.isReadable())
    {
    message->setText("Merge directory does not exist or is not readable.");

 }
 else if (fileOutput->text()=="") {

        message->setText("Please specify an output file name.");
            }

 }

message->show();
}


Widget::~Widget()
{
    delete ui;
}
