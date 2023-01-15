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
    obj.num_facets = 0;
    obj.num_vertex = 0;
    }

viewer::~viewer()
{
    delete ui;
}


void viewer::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Obj File"), "/Users/", tr("OBJ Files (*.obj)"));
    if(fileName!="") {
        qDebug() << fileName;

        QByteArray tmp = fileName.toLocal8Bit();
        const char* file = tmp.data();

//    {const char * file = "/Users/mockingb/goinfre/test24/obj/cube.obj";

        if(parse_num_vertex_facets(file, &obj)) {
            qDebug() << "Error";
        } else {
            int err = init_obj_struct(&obj);
            if(!err) {
                parse_file(file, &obj);
            }
        }

    }

//        static double vertex_ar[] = {-0.500000, -0.500000, 0.500000,
//                              0.500000, -0.500000, 0.500000,
//                              -0.500000, 0.500000, 0.500000,
//                              0.500000, 0.500000, 0.500000,
//                              -0.500000, 0.500000, -0.500000,
//                              0.500000, 0.500000, -0.500000,
//                              -0.500000, -0.500000, -0.500000,
//                              0.500000, -0.500000, -0.500000};
//        static int indexes_ar[] = {0,1,1,2,2,0, 2,1,1,3,3,2, 2,3,3,4,4,2, 4,3,3,5,5,4,
//                            4,5,5,6,6,4, 6,5,5,7,7,6, 6,7,7,0,0,6, 0,7,7,1,1,0,
//                            1,7,7,3,3,1, 3,7,7,5,5,3, 6,0,0,4,4,6, 4,0,0,2,2,4};
        std::cout<< "here___" << std::endl;
    ui->widget->set_vertex_arr(obj.vertex_arr);
    ui->widget->set_facets_arr(obj.facets_arr);
    ui->widget->set_lines(obj.num_facets);
    ui->widget->set();
    qDebug() << obj.num_facets;
    ui->widget->update();

}
