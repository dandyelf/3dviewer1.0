#include "viewer.h"

#include <QDebug>
#include <QFileDialog>
#include <iostream>
#include <QSettings>
#include "ui_viewer.h"

viewer::viewer(QWidget* parent) : QMainWindow(parent), ui(new Ui::viewer) {
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
  setup_defaults();
}

viewer::~viewer() {
    settings_save();
    delete ui;
}

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
  double mv = 0.5;
  move_y(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_8_clicked()
{
    double mv = 0.5;
    move_x(&obj, mv);
    ui->widget->set_vertex_arr(obj.vertexes);
    ui->widget->update();
}


void viewer::on_pushButton_7_clicked()
{
    double mv = - 0.5;
    move_x(&obj, mv);
    ui->widget->set_vertex_arr(obj.vertexes);
    ui->widget->update();
}


void viewer::on_pushButton_6_clicked()
{
    double mv = - 0.5;
    move_y(&obj, mv);
    ui->widget->set_vertex_arr(obj.vertexes);
    ui->widget->update();
}


void viewer::on_pushButton_9_clicked()
{
    ui->widget->fon_r = ui->lineEdit->text().toDouble();
    ui->widget->fon_g = ui->lineEdit_2->text().toDouble();
    ui->widget->fon_b = ui->lineEdit_3->text().toDouble();
    ui->widget->update();

}


void viewer::on_pushButton_10_clicked()
{
    ui->widget->line_r = ui->lineEdit_4->text().toDouble();
    ui->widget->line_g = ui->lineEdit_5->text().toDouble();
    ui->widget->line_b = ui->lineEdit_6->text().toDouble();
    ui->widget->update();
}

void viewer::setup_defaults() {

    settings_load();
}

void viewer::settings_load() {
    //  Загружаем настройки
    QSettings settings( "s21_3d_viewer.conf", QSettings::IniFormat );
    settings.beginGroup("Main_Settings");
//    ui->checkBox->setChecked(settings.value("QCheckBox", true).toBool());
//    ui->checkBox_2->setChecked(settings.value("QCheckBox2", true).toBool());
    settings.endGroup();
}

void viewer::settings_save() {
    //  Сохраняем настройки
        QSettings settings( "s21_3d_viewer.conf", QSettings::IniFormat );
        settings.beginGroup("Main_Settings");
        settings.setValue("lineEdit", ui->lineEdit->text());
        settings.setValue("lineEdit_2", ui->lineEdit_2->text());
        settings.endGroup();
}
