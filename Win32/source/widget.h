#ifndef WIDGET_H
#define WIDGET_H



#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QCheckBox>
#include <QProgressDialog>
#include <QMessageBox>
#include <QImage>

namespace Ui {
    class Widget;
}



class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_selectFolder_clicked();
    void on_selectFile_clicked();
    void on_proceed_clicked();



private:
    Ui::Widget *ui;

    QPushButton *selectFolder;
    QLabel * folderInput;
    QComboBox * mergeDirection;
    QLineEdit *resize;
    QLineEdit * indent;
    QLabel * addToFile;
    QPushButton *selectFile;
    QComboBox *addPosition;
    QLineEdit * fileOutput;
    QPushButton *proceed;
    QCheckBox * rgbSwap;
    QLabel * notice;
    QComboBox * format;
    QMessageBox * message;

};

#endif // WIDGET_H


