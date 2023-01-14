#include "viewer.h"
#include "ui_viewer.h"
#include <QFileDialog>
#include <QDebug>

viewer::viewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::viewer)
{
    ui->setupUi(this);

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

        if(!parse_num_vertex_facets(file, ui->widget->obj)) {
            qDebug() << "Error";
        } else {
            int err = init_obj_struct(ui->widget->obj);
            if(!err) {
                parse_file(file, ui->widget->obj);
            }
        }
    }
}
