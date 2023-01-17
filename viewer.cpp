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
    obj.count_of_vertexes = 0;
    obj.count_of_facets = 0;
    }

viewer::~viewer()
{
    delete ui;
}


void viewer::on_pushButton_clicked()
{
//    static double vertex_ar[] = {-0.500000, -0.500000, 0.500000,
//                          0.500000, -0.500000, 0.500000,
//                          -0.500000, 0.500000, 0.500000,
//                          0.500000, 0.500000, 0.500000,
//                          -0.500000, 0.500000, -0.500000,
//                          0.500000, 0.500000, -0.500000,
//                          -0.500000, -0.500000, -0.500000,
//                          0.500000, -0.500000, -0.500000};
//    static int indexes_ar[] = {0,1,1,2,2,0, 2,1,1,3,3,2, 2,3,3,4,4,2, 4,3,3,5,5,4,
//                        4,5,5,6,6,4, 6,5,5,7,7,6, 6,7,7,0,0,6, 0,7,7,1,1,0,
//                        1,7,7,3,3,1, 3,7,7,5,5,3, 6,0,0,4,4,6, 4,0,0,2,2,4};
//    ui->widget->set_vertex_arr((vertex_ar));
//    ui->widget->set_facets_arr(indexes_ar);
//    ui->widget->set_lines(72);
//    ui->widget->set();
//    ui->widget->update();

    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Obj File"), "/Users/", tr("OBJ Files (*.obj)"));
    if(fileName!="") {
        qDebug() << fileName;

        QByteArray tmp = fileName.toLocal8Bit();
        char* file = tmp.data();

        int err = readobj(file, &obj);
        qDebug() << "Lines: " << err;

        if(err!=-1){
            ui->widget->set_vertex_arr(obj.vertexes);
            ui->widget->set_facets_arr(obj.polygons);
            for(int i = 0; i < err;i++) {
                std::cout<<obj.polygons[i]<<std::endl;
            }
            ui->widget->set_lines(err);
            ui->widget->set();
            ui->widget->update();
        }

    }





}
