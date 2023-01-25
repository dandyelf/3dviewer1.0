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
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE

class Ui_viewer
{
public:
    QWidget *centralwidget;
    scene *widget;
    QWidget *widget1;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton_ScaleX;
    QLineEdit *lineEdit_ScaleX;
    QPushButton *pushButton_ScaleY;
    QLineEdit *lineEdit_ScaleY;
    QPushButton *pushButton_ScaleZ;
    QLineEdit *lineEdit_ScaleZ;
    QPushButton *pushButton_Scale;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSlider *horizontalSlider_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSlider *horizontalSlider_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSlider *horizontalSlider_5;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_2;
    QPushButton *pushButton_TurnX;
    QLineEdit *lineEdit_TurnX;
    QPushButton *pushButton_TurnY;
    QLineEdit *lineEdit_TurnY;
    QPushButton *pushButton_TurnZ;
    QLineEdit *lineEdit_TurnZ;
    QPushButton *pushButton_Turn;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_7;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_Zneg;
    QPushButton *pushButton_Zneg;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_Zpos;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Zpos;
    QPushButton *pushButton_Move;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QSlider *horizontalSlider_11;
    QSlider *horizontalSlider_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QSlider *horizontalSlider_10;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSlider *horizontalSlider_9;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_11;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewer)
    {
        if (viewer->objectName().isEmpty())
            viewer->setObjectName(QString::fromUtf8("viewer"));
        viewer->resize(1226, 760);
        centralwidget = new QWidget(viewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new scene(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 35, 600, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(600, 600));
        widget->setMaximumSize(QSize(600, 600));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(610, 10, 608, 701));
        formLayout_3 = new QFormLayout(widget1);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoDefault(false);

        horizontalLayout_11->addWidget(pushButton);

        pushButton_12 = new QPushButton(widget1);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_11->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(widget1);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        horizontalLayout_11->addWidget(pushButton_13);

        pushButton_15 = new QPushButton(widget1);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        horizontalLayout_11->addWidget(pushButton_15);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_11->addWidget(pushButton_2);


        formLayout_3->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_11);

        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 0));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_ScaleX = new QPushButton(groupBox);
        pushButton_ScaleX->setObjectName(QString::fromUtf8("pushButton_ScaleX"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_ScaleX);

        lineEdit_ScaleX = new QLineEdit(groupBox);
        lineEdit_ScaleX->setObjectName(QString::fromUtf8("lineEdit_ScaleX"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_ScaleX);

        pushButton_ScaleY = new QPushButton(groupBox);
        pushButton_ScaleY->setObjectName(QString::fromUtf8("pushButton_ScaleY"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_ScaleY);

        lineEdit_ScaleY = new QLineEdit(groupBox);
        lineEdit_ScaleY->setObjectName(QString::fromUtf8("lineEdit_ScaleY"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_ScaleY);

        pushButton_ScaleZ = new QPushButton(groupBox);
        pushButton_ScaleZ->setObjectName(QString::fromUtf8("pushButton_ScaleZ"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_ScaleZ);

        lineEdit_ScaleZ = new QLineEdit(groupBox);
        lineEdit_ScaleZ->setObjectName(QString::fromUtf8("lineEdit_ScaleZ"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_ScaleZ);

        pushButton_Scale = new QPushButton(groupBox);
        pushButton_Scale->setObjectName(QString::fromUtf8("pushButton_Scale"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pushButton_Scale);

        pushButton_ScaleZ->raise();
        pushButton_ScaleY->raise();
        pushButton_ScaleX->raise();
        pushButton_Scale->raise();
        lineEdit_ScaleX->raise();
        lineEdit_ScaleY->raise();
        lineEdit_ScaleZ->raise();

        formLayout_3->setWidget(1, QFormLayout::LabelRole, groupBox);

        groupBox_3 = new QGroupBox(widget1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSlider_4 = new QSlider(groupBox_3);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_4);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSlider_3 = new QSlider(groupBox_3);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setSingleStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_3);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        horizontalSlider_5 = new QSlider(groupBox_3);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_5);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        formLayout_3->setWidget(1, QFormLayout::FieldRole, groupBox_3);

        groupBox_7 = new QGroupBox(widget1);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(300, 0));
        formLayout_2 = new QFormLayout(groupBox_7);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        pushButton_TurnX = new QPushButton(groupBox_7);
        pushButton_TurnX->setObjectName(QString::fromUtf8("pushButton_TurnX"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_TurnX);

        lineEdit_TurnX = new QLineEdit(groupBox_7);
        lineEdit_TurnX->setObjectName(QString::fromUtf8("lineEdit_TurnX"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_TurnX);

        pushButton_TurnY = new QPushButton(groupBox_7);
        pushButton_TurnY->setObjectName(QString::fromUtf8("pushButton_TurnY"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton_TurnY);

        lineEdit_TurnY = new QLineEdit(groupBox_7);
        lineEdit_TurnY->setObjectName(QString::fromUtf8("lineEdit_TurnY"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_TurnY);

        pushButton_TurnZ = new QPushButton(groupBox_7);
        pushButton_TurnZ->setObjectName(QString::fromUtf8("pushButton_TurnZ"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, pushButton_TurnZ);

        lineEdit_TurnZ = new QLineEdit(groupBox_7);
        lineEdit_TurnZ->setObjectName(QString::fromUtf8("lineEdit_TurnZ"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_TurnZ);

        pushButton_Turn = new QPushButton(groupBox_7);
        pushButton_Turn->setObjectName(QString::fromUtf8("pushButton_Turn"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, pushButton_Turn);


        formLayout_3->setWidget(2, QFormLayout::LabelRole, groupBox_7);

        groupBox_5 = new QGroupBox(widget1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(300, 0));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSlider_2 = new QSlider(groupBox_5);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_2);

        horizontalSlider_6 = new QSlider(groupBox_5);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_6);

        horizontalSlider_7 = new QSlider(groupBox_5);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_7);


        gridLayout_5->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton = new QRadioButton(groupBox_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_3->addWidget(radioButton_2);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);


        gridLayout_5->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_5->addWidget(label_14);

        horizontalSlider = new QSlider(groupBox_5);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider);


        gridLayout_5->addLayout(verticalLayout_5, 1, 0, 1, 3);


        formLayout_3->setWidget(2, QFormLayout::FieldRole, groupBox_5);

        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 2, 4, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 2, 1, 1);

        lineEdit_Zneg = new QLineEdit(groupBox_2);
        lineEdit_Zneg->setObjectName(QString::fromUtf8("lineEdit_Zneg"));

        gridLayout_2->addWidget(lineEdit_Zneg, 1, 3, 1, 1);

        pushButton_Zneg = new QPushButton(groupBox_2);
        pushButton_Zneg->setObjectName(QString::fromUtf8("pushButton_Zneg"));

        gridLayout_2->addWidget(pushButton_Zneg, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 4, 2, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 4, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 2, 3, 1, 1);

        lineEdit_Zpos = new QLineEdit(groupBox_2);
        lineEdit_Zpos->setObjectName(QString::fromUtf8("lineEdit_Zpos"));

        gridLayout_2->addWidget(lineEdit_Zpos, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Zpos = new QPushButton(groupBox_2);
        pushButton_Zpos->setObjectName(QString::fromUtf8("pushButton_Zpos"));

        gridLayout_2->addWidget(pushButton_Zpos, 4, 0, 1, 1);

        pushButton_Move = new QPushButton(groupBox_2);
        pushButton_Move->setObjectName(QString::fromUtf8("pushButton_Move"));

        gridLayout_2->addWidget(pushButton_Move, 2, 2, 1, 1);


        formLayout_3->setWidget(3, QFormLayout::LabelRole, groupBox_2);

        groupBox_6 = new QGroupBox(widget1);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_10->addWidget(label_17);

        horizontalSlider_11 = new QSlider(groupBox_6);
        horizontalSlider_11->setObjectName(QString::fromUtf8("horizontalSlider_11"));
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_11);


        gridLayout_6->addLayout(horizontalLayout_10, 4, 0, 1, 1);

        horizontalSlider_8 = new QSlider(groupBox_6);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_8, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        horizontalSlider_10 = new QSlider(groupBox_6);
        horizontalSlider_10->setObjectName(QString::fromUtf8("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_10);


        gridLayout_6->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        horizontalSlider_9 = new QSlider(groupBox_6);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setMaximum(100);
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_9);


        gridLayout_6->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox_6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setEnabled(false);

        gridLayout_6->addWidget(pushButton_11, 1, 0, 1, 1);


        formLayout_3->setWidget(3, QFormLayout::FieldRole, groupBox_6);

        groupBox_4 = new QGroupBox(widget1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 120));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);


        gridLayout_4->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);


        gridLayout_4->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        formLayout_3->setWidget(4, QFormLayout::SpanningRole, groupBox_4);

        viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1226, 21));
        viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(viewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        viewer->setStatusBar(statusbar);

        retranslateUi(viewer);

        QMetaObject::connectSlotsByName(viewer);
    } // setupUi

    void retranslateUi(QMainWindow *viewer)
    {
        viewer->setWindowTitle(QCoreApplication::translate("viewer", "3D Viewer", nullptr));
        pushButton->setText(QCoreApplication::translate("viewer", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_12->setText(QCoreApplication::translate("viewer", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214  JPEG", nullptr));
        pushButton_13->setText(QCoreApplication::translate("viewer", "\320\241\321\202\320\260\321\200\321\202 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_15->setText(QCoreApplication::translate("viewer", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("viewer", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("viewer", "\320\234\320\260\321\201\321\201\321\210\321\202\320\260\320\261", nullptr));
        pushButton_ScaleX->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 X", nullptr));
        pushButton_ScaleY->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 Y", nullptr));
        pushButton_ScaleZ->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 Z", nullptr));
        pushButton_Scale->setText(QCoreApplication::translate("viewer", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("viewer", "\320\244\320\276\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("viewer", "G", nullptr));
        label_4->setText(QCoreApplication::translate("viewer", "R", nullptr));
        label_6->setText(QCoreApplication::translate("viewer", "B", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("viewer", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        pushButton_TurnX->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 X", nullptr));
        pushButton_TurnY->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 Y", nullptr));
        pushButton_TurnZ->setText(QCoreApplication::translate("viewer", "\320\277\320\276 \320\276\321\201\320\270 Z", nullptr));
        pushButton_Turn->setText(QCoreApplication::translate("viewer", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("viewer", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\273\320\270\320\275\320\270\320\271", nullptr));
        radioButton->setText(QCoreApplication::translate("viewer", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("viewer", "\320\237\321\200\320\265\321\200\321\213\320\262\320\270\321\201\321\202\320\260\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("viewer", "R", nullptr));
        label_12->setText(QCoreApplication::translate("viewer", "G", nullptr));
        label_13->setText(QCoreApplication::translate("viewer", "B", nullptr));
        label_14->setText(QCoreApplication::translate("viewer", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("viewer", "\320\241\320\264\320\262\320\270\320\263", nullptr));
        pushButton_7->setText(QCoreApplication::translate("viewer", "x-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("viewer", "x+", nullptr));
        pushButton_Zneg->setText(QCoreApplication::translate("viewer", "z-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("viewer", "y-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("viewer", "y+", nullptr));
        pushButton_Zpos->setText(QCoreApplication::translate("viewer", "z+", nullptr));
        pushButton_Move->setText(QCoreApplication::translate("viewer", "\320\241\320\264\320\262\320\270\320\263", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("viewer", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\202\320\276\321\207\320\265\320\272", nullptr));
        label_17->setText(QCoreApplication::translate("viewer", "B", nullptr));
        label_16->setText(QCoreApplication::translate("viewer", "G", nullptr));
        label->setText(QCoreApplication::translate("viewer", "\320\222\320\265\321\201", nullptr));
        label_15->setText(QCoreApplication::translate("viewer", "R", nullptr));
        pushButton_11->setText(QCoreApplication::translate("viewer", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\206\320\262\320\265\321\202 \321\202\320\276\321\207\320\265\320\272", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("viewer", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_3->setText(QString());
        label_7->setText(QString());
        label_9->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewer: public Ui_viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
