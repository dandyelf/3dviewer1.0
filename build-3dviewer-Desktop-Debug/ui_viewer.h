/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE

class Ui_Viewer
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    scene *widget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QScrollBar *horizontalScrollBar;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QScrollBar *horizontalScrollBar_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QScrollBar *horizontalScrollBar_3;
    QGroupBox *groupBox_10;
    QFormLayout *formLayout_2;
    QPushButton *pushButton_11;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QScrollBar *horizontalScrollBar_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QScrollBar *horizontalScrollBar_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QScrollBar *horizontalScrollBar_6;
    QScrollBar *horizontalScrollBar_7;
    QLabel *label_16;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_20;
    QPushButton *pushButton_18;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_19;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_7;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QScrollBar *horizontalScrollBar_8;
    QLabel *label_13;
    QScrollBar *horizontalScrollBar_9;
    QLabel *label_14;
    QScrollBar *horizontalScrollBar_10;
    QLabel *label_15;
    QScrollBar *horizontalScrollBar_11;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout_4;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Viewer)
    {
        if (Viewer->objectName().isEmpty())
            Viewer->setObjectName(QString::fromUtf8("Viewer"));
        Viewer->resize(1180, 750);
        Viewer->setMinimumSize(QSize(1180, 750));
        Viewer->setMaximumSize(QSize(1190, 760));
        centralwidget = new QWidget(Viewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget = new scene(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_3->addWidget(widget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 700));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(15, 66, 260, 173));
        groupBox_2->setMinimumSize(QSize(260, 0));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_7);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_8);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_9);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pushButton_6);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(283, 66, 260, 123));
        groupBox_5->setMinimumSize(QSize(260, 0));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(label);

        horizontalScrollBar = new QScrollBar(groupBox_5);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalScrollBar);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(label_2);

        horizontalScrollBar_2 = new QScrollBar(groupBox_5);
        horizontalScrollBar_2->setObjectName(QString::fromUtf8("horizontalScrollBar_2"));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalScrollBar_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_3);

        horizontalScrollBar_3 = new QScrollBar(groupBox_5);
        horizontalScrollBar_3->setObjectName(QString::fromUtf8("horizontalScrollBar_3"));
        horizontalScrollBar_3->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalScrollBar_3);


        verticalLayout_3->addLayout(horizontalLayout_8);

        groupBox_10 = new QGroupBox(groupBox);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(15, 239, 260, 173));
        groupBox_10->setMinimumSize(QSize(260, 0));
        formLayout_2 = new QFormLayout(groupBox_10);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        pushButton_11 = new QPushButton(groupBox_10);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_11);

        lineEdit_4 = new QLineEdit(groupBox_10);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        pushButton_12 = new QPushButton(groupBox_10);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton_12);

        lineEdit_5 = new QLineEdit(groupBox_10);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_5);

        pushButton_13 = new QPushButton(groupBox_10);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, pushButton_13);

        lineEdit_6 = new QLineEdit(groupBox_10);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        pushButton_10 = new QPushButton(groupBox_10);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, pushButton_10);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(283, 239, 260, 150));
        groupBox_6->setMinimumSize(QSize(260, 0));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton_3 = new QRadioButton(groupBox_6);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setChecked(true);

        verticalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_6);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_4->addWidget(radioButton_4);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 2, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_9->addWidget(label_4);

        horizontalScrollBar_4 = new QScrollBar(groupBox_6);
        horizontalScrollBar_4->setObjectName(QString::fromUtf8("horizontalScrollBar_4"));
        horizontalScrollBar_4->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalScrollBar_4);


        gridLayout->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_10->addWidget(label_5);

        horizontalScrollBar_5 = new QScrollBar(groupBox_6);
        horizontalScrollBar_5->setObjectName(QString::fromUtf8("horizontalScrollBar_5"));
        horizontalScrollBar_5->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalScrollBar_5);


        gridLayout->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_11->addWidget(label_6);

        horizontalScrollBar_6 = new QScrollBar(groupBox_6);
        horizontalScrollBar_6->setObjectName(QString::fromUtf8("horizontalScrollBar_6"));
        horizontalScrollBar_6->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalScrollBar_6);


        gridLayout->addLayout(horizontalLayout_11, 2, 1, 1, 1);

        horizontalScrollBar_7 = new QScrollBar(groupBox_6);
        horizontalScrollBar_7->setObjectName(QString::fromUtf8("horizontalScrollBar_7"));
        horizontalScrollBar_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_7, 3, 0, 1, 2);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(110, 19));

        gridLayout->addWidget(label_16, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(15, 412, 260, 173));
        groupBox_4->setMinimumSize(QSize(260, 0));
        groupBox_4->setMaximumSize(QSize(252, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_9 = new QLineEdit(groupBox_4);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 19));

        gridLayout_3->addWidget(lineEdit_9, 4, 3, 1, 1);

        pushButton_17 = new QPushButton(groupBox_4);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout_3->addWidget(pushButton_17, 5, 2, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_4);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 19));

        gridLayout_3->addWidget(lineEdit_8, 2, 6, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_4);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 19));

        gridLayout_3->addWidget(lineEdit_11, 3, 3, 1, 1);

        pushButton_20 = new QPushButton(groupBox_4);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_3->addWidget(pushButton_20, 3, 7, 1, 1);

        pushButton_18 = new QPushButton(groupBox_4);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(pushButton_18, 5, 4, 1, 1);

        pushButton_16 = new QPushButton(groupBox_4);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(pushButton_16, 3, 4, 1, 2);

        pushButton_15 = new QPushButton(groupBox_4);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_3->addWidget(pushButton_15, 1, 7, 1, 1);

        pushButton_19 = new QPushButton(groupBox_4);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_3->addWidget(pushButton_19, 3, 2, 1, 1);

        pushButton_14 = new QPushButton(groupBox_4);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(pushButton_14, 1, 4, 1, 1);

        lineEdit_10 = new QLineEdit(groupBox_4);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(50, 19));

        gridLayout_3->addWidget(lineEdit_10, 4, 4, 1, 1);

        lineEdit_12 = new QLineEdit(groupBox_4);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(0, 19));

        gridLayout_3->addWidget(lineEdit_12, 3, 6, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_4);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(50, 19));

        gridLayout_3->addWidget(lineEdit_7, 2, 4, 1, 1);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(283, 412, 260, 173));
        groupBox_7->setMinimumSize(QSize(260, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_7);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_5 = new QRadioButton(groupBox_7);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_7 = new QRadioButton(groupBox_7);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setChecked(true);

        horizontalLayout->addWidget(radioButton_7);

        radioButton_6 = new QRadioButton(groupBox_7);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(30, 16777215));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        horizontalScrollBar_8 = new QScrollBar(groupBox_7);
        horizontalScrollBar_8->setObjectName(QString::fromUtf8("horizontalScrollBar_8"));
        horizontalScrollBar_8->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_8->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, horizontalScrollBar_8);

        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(30, 16777215));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        horizontalScrollBar_9 = new QScrollBar(groupBox_7);
        horizontalScrollBar_9->setObjectName(QString::fromUtf8("horizontalScrollBar_9"));
        horizontalScrollBar_9->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_9->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, horizontalScrollBar_9);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(30, 16777215));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_14);

        horizontalScrollBar_10 = new QScrollBar(groupBox_7);
        horizontalScrollBar_10->setObjectName(QString::fromUtf8("horizontalScrollBar_10"));
        horizontalScrollBar_10->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_10->setMaximumSize(QSize(196, 16777215));
        horizontalScrollBar_10->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, horizontalScrollBar_10);

        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(30, 16777215));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_15);

        horizontalScrollBar_11 = new QScrollBar(groupBox_7);
        horizontalScrollBar_11->setObjectName(QString::fromUtf8("horizontalScrollBar_11"));
        horizontalScrollBar_11->setMinimumSize(QSize(196, 0));
        horizontalScrollBar_11->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, horizontalScrollBar_11);


        verticalLayout_2->addLayout(formLayout_3);

        groupBox_8 = new QGroupBox(groupBox);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(15, 585, 260, 100));
        groupBox_8->setMinimumSize(QSize(260, 0));
        groupBox_8->setMaximumSize(QSize(16777215, 100));
        formLayout_4 = new QFormLayout(groupBox_8);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_9 = new QLabel(groupBox_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(40, 23));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, label_9);

        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 23));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, label_11);

        label_7 = new QLabel(groupBox_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(140, 23));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(140, 23));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_8);

        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(140, 23));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_10);

        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(283, 585, 260, 82));
        groupBox_9->setMinimumSize(QSize(260, 0));
        groupBox_9->setMaximumSize(QSize(260, 100));
        verticalLayout = new QVBoxLayout(groupBox_9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox_9);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_9);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 528, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        horizontalLayout_3->addWidget(groupBox);

        Viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Viewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1180, 24));
        Viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(Viewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Viewer->setStatusBar(statusbar);

        retranslateUi(Viewer);

        QMetaObject::connectSlotsByName(Viewer);
    } // setupUi

    void retranslateUi(QMainWindow *Viewer)
    {
        Viewer->setWindowTitle(QCoreApplication::translate("Viewer", "Viewer", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Viewer", "\320\234\320\260\321\201\321\201\321\210\321\202\320\260\320\261", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 X", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 Y", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 Z", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Viewer", "\320\234\320\260\321\201\321\201\321\210\321\202\320\260\320\261", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Viewer", "\320\244\320\276\320\275", nullptr));
        label->setText(QCoreApplication::translate("Viewer", "R", nullptr));
        label_2->setText(QCoreApplication::translate("Viewer", "G", nullptr));
        label_3->setText(QCoreApplication::translate("Viewer", "B", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("Viewer", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 X", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 Y", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Viewer", "\320\277\320\276 \320\276\321\201\320\270 Z", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Viewer", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Viewer", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\273\320\270\320\275\320\270\320\271", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Viewer", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Viewer", "\320\237\321\200\320\265\321\200\321\213\320\262\320\270\321\201\321\202\320\260\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Viewer", "R", nullptr));
        label_5->setText(QCoreApplication::translate("Viewer", "G", nullptr));
        label_6->setText(QCoreApplication::translate("Viewer", "B", nullptr));
        label_16->setText(QCoreApplication::translate("Viewer", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Viewer", "\320\241\320\264\320\262\320\270\320\263", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Viewer", "Z+", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Viewer", "X+", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Viewer", "Y-", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Viewer", "\320\241\320\264\320\262\320\270\320\263", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Viewer", "Z-", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Viewer", "X-", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Viewer", "Y+", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Viewer", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\202\320\276\321\207\320\265\320\272", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Viewer", "\320\235\320\265\321\202", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Viewer", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Viewer", "\320\232\321\200\321\203\320\263", nullptr));
        label_12->setText(QCoreApplication::translate("Viewer", "R", nullptr));
        label_13->setText(QCoreApplication::translate("Viewer", "G", nullptr));
        label_14->setText(QCoreApplication::translate("Viewer", "B", nullptr));
        label_15->setText(QCoreApplication::translate("Viewer", "\320\222\320\265\321\201", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Viewer", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_9->setText(QString());
        label_11->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("Viewer", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        radioButton->setText(QCoreApplication::translate("Viewer", "\320\237\320\265\321\200\321\201\320\277\320\265\320\272\321\202\320\270\320\262\320\275\320\260\321\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Viewer", "\320\236\321\200\321\202\320\276\320\263\320\276\320\275\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Viewer", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Viewer", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 JPEG", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Viewer", "\320\241\321\202\320\260\321\200\321\202 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Viewer", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Viewer", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Viewer: public Ui_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
