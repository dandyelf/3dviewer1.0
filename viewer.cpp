#include "viewer.h"

#include <QDebug>
#include <QFileDialog>
#include <iostream>

#include "ui_viewer.h"

viewer::viewer(QWidget* parent) : QMainWindow(parent), ui(new Ui::viewer) {
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
}

viewer::~viewer() { delete ui; }

void viewer::on_pushButton_clicked() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open Obj File"), "/Users/", tr("OBJ Files (*.obj)"));
  if (fileName != "") {
    qDebug() << fileName;

    QByteArray tmp = fileName.toLocal8Bit();
    char* file = tmp.data();

    int err = readobj(file, &obj);

    if (err != -1) {
      ////scaling block
      ///
      double max_el = 0.0;
      for (int i = 0; i < obj.count_of_vertexes; i++) {
        if (max_el < obj.vertexes[i]) max_el = obj.vertexes[i];
      }

      for (int i = 0; i < (obj.count_of_vertexes) * 3; i++) {
        obj.vertexes[i] /= max_el;
      }
      ////end scaling block
      ///
      ////set stats
      ///
      ui->label_9->setText(QString::number(obj.count_of_vertexes));
      ui->label_10->setText(QString::number(obj.count_of_facets));
      ///
      ////end stats
      ui->widget->set_vertex_arr(obj.vertexes);
      ui->widget->set_facets_arr(obj.polygons);
      for (int i = 0; i < err; i++) {
        std::cout << obj.polygons[i] << std::endl;
      }
      ui->widget->set_lines(err);
      ui->widget->set();
      ui->widget->update();
    }
  }
}

void viewer::on_pushButton_2_clicked() { QApplication::quit(); }

void viewer::on_pushButton_4_clicked() {
  for (int i = 0; i < (obj.count_of_vertexes) * 3; i++) {
    obj.vertexes[i] /= 0.95;
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_3_clicked() {
  for (int i = 0; i < (obj.count_of_vertexes) * 3; i++) {
    obj.vertexes[i] *= 0.95;
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_5_clicked() {
  for (int i = 0, k = 1; i < (obj.count_of_vertexes) * 3; k++, i++) {
    if (k == 1) obj.vertexes[i] += 0.1;
    if (k == 3) k = 1;
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}
