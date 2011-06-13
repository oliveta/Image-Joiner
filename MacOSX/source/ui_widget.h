/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun Jun 5 20:00:07 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *folderInput;
    QPushButton *selectFolder;
    QLabel *label_3;
    QComboBox *mergeDirection;
    QLabel *label_7;
    QLineEdit *resize;
    QLabel *label_6;
    QLineEdit *indent;
    QLabel *label_8;
    QCheckBox *rgbSwap;
    QLabel *label_2;
    QLabel *addToFile;
    QPushButton *selectFile;
    QLabel *label_4;
    QComboBox *addPosition;
    QLabel *label_5;
    QLineEdit *fileOutput;
    QLabel *label_9;
    QComboBox *format;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *proceed;
    QLabel *back;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QTextBrowser *textBrowser_4;
    QLabel *label_17;
    QTextBrowser *textBrowser_5;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QTextBrowser *textBrowser_6;
    QLabel *label_21;
    QLabel *label_22;
    QTextBrowser *textBrowser_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(589, 436);
        Widget->setMinimumSize(QSize(589, 436));
        Widget->setStyleSheet(QString::fromUtf8("#Widget{\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #000000, stop: 1 #666666);\n"
"\n"
"\n"
"}\n"
"QLabel {\n"
"color:#cccccc;\n"
"}\n"
"\n"
"#back {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #69cff6, stop: 1 #00a0c6);\n"
"border-radius: 9px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#indent, #fileOutput, #resize {\n"
"background-color: #333333;\n"
"border:none;\n"
"padding:5px;\n"
"color:#cccccc;\n"
"}\n"
"\n"
"#resize:focus {\n"
"border:#00cccc;\n"
"}\n"
"\n"
"#indent:focus, #fileOutput:focus {\n"
"border:#00cccc;\n"
"}\n"
"\n"
""));
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 351, 501));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#eecccc"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        folderInput = new QLabel(formLayoutWidget);
        folderInput->setObjectName(QString::fromUtf8("folderInput"));

        formLayout->setWidget(2, QFormLayout::FieldRole, folderInput);

        selectFolder = new QPushButton(formLayoutWidget);
        selectFolder->setObjectName(QString::fromUtf8("selectFolder"));
        selectFolder->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, selectFolder);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        mergeDirection = new QComboBox(formLayoutWidget);
        mergeDirection->setObjectName(QString::fromUtf8("mergeDirection"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mergeDirection);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        resize = new QLineEdit(formLayoutWidget);
        resize->setObjectName(QString::fromUtf8("resize"));

        formLayout->setWidget(5, QFormLayout::FieldRole, resize);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        indent = new QLineEdit(formLayoutWidget);
        indent->setObjectName(QString::fromUtf8("indent"));

        formLayout->setWidget(6, QFormLayout::FieldRole, indent);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        rgbSwap = new QCheckBox(formLayoutWidget);
        rgbSwap->setObjectName(QString::fromUtf8("rgbSwap"));

        formLayout->setWidget(7, QFormLayout::FieldRole, rgbSwap);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_2);

        addToFile = new QLabel(formLayoutWidget);
        addToFile->setObjectName(QString::fromUtf8("addToFile"));

        formLayout->setWidget(8, QFormLayout::FieldRole, addToFile);

        selectFile = new QPushButton(formLayoutWidget);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(9, QFormLayout::FieldRole, selectFile);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_4);

        addPosition = new QComboBox(formLayoutWidget);
        addPosition->setObjectName(QString::fromUtf8("addPosition"));

        formLayout->setWidget(10, QFormLayout::FieldRole, addPosition);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color:#eecccc;"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_5);

        fileOutput = new QLineEdit(formLayoutWidget);
        fileOutput->setObjectName(QString::fromUtf8("fileOutput"));

        formLayout->setWidget(11, QFormLayout::FieldRole, fileOutput);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_9);

        format = new QComboBox(formLayoutWidget);
        format->setObjectName(QString::fromUtf8("format"));

        formLayout->setWidget(12, QFormLayout::FieldRole, format);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(13, QFormLayout::LabelRole, horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(14, QFormLayout::FieldRole, verticalSpacer);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(15, QFormLayout::LabelRole, horizontalSpacer_2);

        proceed = new QPushButton(formLayoutWidget);
        proceed->setObjectName(QString::fromUtf8("proceed"));
        proceed->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(15, QFormLayout::FieldRole, proceed);

        back = new QLabel(Widget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(140, 10, 241, 335));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(410, 180, 180, 51));
        textBrowser->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(410, 235, 181, 41));
        textBrowser_2->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_3 = new QTextBrowser(Widget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(410, 323, 181, 51));
        textBrowser_3->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(410, 40, 10, 10));
        label_10->setStyleSheet(QString::fromUtf8("background-color:#eecccc;"));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(430, 38, 121, 16));
        label_11->setStyleSheet(QString::fromUtf8("font-size:10px;\n"
"color:#666666;"));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(430, 58, 121, 16));
        label_12->setStyleSheet(QString::fromUtf8("color:#666666;font-size:10px;"));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(410, 60, 10, 10));
        label_13->setStyleSheet(QString::fromUtf8("background-color:#cccccc;"));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(400, 0, 7452, 8157));
        label_14->setStyleSheet(QString::fromUtf8("background-color:#ffffff;"));
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(410, 10, 62, 16));
        label_15->setStyleSheet(QString::fromUtf8("color:#666666"));
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(410, 76, 131, 20));
        label_16->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        textBrowser_4 = new QTextBrowser(Widget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(410, 90, 181, 41));
        textBrowser_4->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        label_17 = new QLabel(Widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(410, 120, 131, 20));
        label_17->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        textBrowser_5 = new QTextBrowser(Widget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(410, 135, 181, 41));
        textBrowser_5->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;\n"
"font-size:10px;"));
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        label_18 = new QLabel(Widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(410, 165, 131, 20));
        label_18->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        label_19 = new QLabel(Widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(410, 220, 131, 20));
        label_19->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        label_20 = new QLabel(Widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(410, 265, 131, 20));
        label_20->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        textBrowser_6 = new QTextBrowser(Widget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(410, 280, 181, 41));
        textBrowser_6->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        label_21 = new QLabel(Widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(410, 310, 171, 20));
        label_21->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        label_22 = new QLabel(Widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(410, 365, 171, 20));
        label_22->setStyleSheet(QString::fromUtf8("color:#666666;FONT-SIZE:10px;"));
        textBrowser_7 = new QTextBrowser(Widget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(410, 380, 181, 61));
        textBrowser_7->setStyleSheet(QString::fromUtf8("color:#666666;\n"
"background-color:transparent;"));
        textBrowser_7->setFrameShape(QFrame::NoFrame);
        label_14->raise();
        back->raise();
        formLayoutWidget->raise();
        textBrowser->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_15->raise();
        label_16->raise();
        textBrowser_4->raise();
        label_17->raise();
        textBrowser_5->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        textBrowser_6->raise();
        label_21->raise();
        label_22->raise();
        textBrowser_7->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Widget", "Select a folder with images you want to merge", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Widget", "Folder to merge    ", 0, QApplication::UnicodeUTF8));
        folderInput->setText(QApplication::translate("Widget", "not selected", 0, QApplication::UnicodeUTF8));
        selectFolder->setText(QApplication::translate("Widget", "select folder", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Merge direction    ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "Resize width    ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "Indent    ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "RGB Swap    ", 0, QApplication::UnicodeUTF8));
        rgbSwap->setText(QString());
        label_2->setText(QApplication::translate("Widget", "Add to file    ", 0, QApplication::UnicodeUTF8));
        addToFile->setText(QApplication::translate("Widget", "not selected", 0, QApplication::UnicodeUTF8));
        selectFile->setText(QApplication::translate("Widget", "select file", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "Add position    ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "Output file name    ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "Output file format    ", 0, QApplication::UnicodeUTF8));
        proceed->setText(QApplication::translate("Widget", "Proceed", 0, QApplication::UnicodeUTF8));
        back->setText(QString());
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The width in </span><span style=\" font-size:10pt; font-weight:600;\">px</span><span style=\" font-size:10pt;\"> to which the images will be resized. If blank, images will not be resized.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The indent in </span><span style=\" font-size:10pt; font-weight:600;\">px</span><span style=\" font-size:10pt;\"> between the merged images. By default 0.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_3->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The images will be added at the selected position to the selected file.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("Widget", "obligatory items", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Widget", "optional items", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QApplication::translate("Widget", "HELP", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Widget", "FOLDER TO MERGE", 0, QApplication::UnicodeUTF8));
        textBrowser_4->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">A folder containing images to be merged.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Widget", "MERGE DIRECTION", 0, QApplication::UnicodeUTF8));
        textBrowser_5->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Merge the images horizontally or vertically.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Widget", "RESIZE WIDTH", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Widget", "INDENT", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Widget", "RGB SWAP", 0, QApplication::UnicodeUTF8));
        textBrowser_6->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">If checked, the rgb swap filter will be applied to the images.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Widget", "ADD TO FILE and ADD POSITION", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Widget", "OUTPUT FILE NAME and FORMAT", 0, QApplication::UnicodeUTF8));
        textBrowser_7->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The resulting image will be saved under the specified file name inside the merge directory.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
