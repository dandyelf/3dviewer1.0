#include "viewer.h"
#include "ui_viewer.h"
#include <QFileDialog>
#include <QDebug>
#include <iostream>

viewer::viewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::viewer)
{
    ui->setupUi(this);
obj = nullptr;
    }

viewer::~viewer()
{
    delete ui;
}


void viewer::on_pushButton_clicked()
{
//    QString fileName = QFileDialog::getOpenFileName(this,
//        tr("Open Obj File"), "/Users/", tr("OBJ Files (*.obj)"));
//    if(fileName!="") {
//        qDebug() << fileName;

//        QByteArray tmp = fileName.toLocal8Bit();
//        const char* file = tmp.data();

    const char * file = "/Users/mockingb/goinfre/test24/obj/cube.obj";

        if(!parse_num_vertex_facets(file, obj)) {
            qDebug() << "Error";
        } else {
            int err = init_obj_struct(obj);
            if(!err) {
                parse_file(file, obj);
            }
        }

//    }
        std::cout<< "here___" << std::endl;
    ui->widget->set_obj(obj);

}
