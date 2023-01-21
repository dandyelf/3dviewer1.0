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
      this, tr("Open Obj File"), path, tr("OBJ Files (*.obj)"));
  if (fileName != "") {
    qDebug() << fileName;
    ////updates
    path = fileName;
    this->setWindowTitle(this->windowTitle()+"~"+fileName);
    ////
    /// \brief tmp
    ///
    QByteArray tmp = fileName.toLocal8Bit();
    char* file = tmp.data();

    int err = StartPars(file, &obj);

    if (err == 0) {
       qDebug() << "i am in..";
      ////scaling block
      ///
      double max_el = 0.0;
      for (int i = 0; i < obj.count_of_vertexes; i++) {
        if (max_el < obj.vertexes[i]) max_el = obj.vertexes[i];
      }


      for (int i = 0; i < (obj.count_of_vertexes) * 3; i++) {
        obj.vertexes[i] /= max_el;
//            qDebug() << obj.vertexes[i];
      }

      for (int i = 0; i < obj.count_of_facets*3; ++i){
           qDebug() << obj.polygons[i];
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
      ui->widget->set_lines(2081*3);
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
//    double mv = - 0.5;
//    move_y(&obj, mv);
    shift_dot(&obj, dot);
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


void viewer::on_radioButton_2_toggled(bool checked)
{
    ui->widget->striple = true;
    ui->widget->update();
}

void viewer::setup_defaults() {
    settings_load();
}

void viewer::settings_load() {
    //  Загружаем настройки
    QSettings settings( "s21_3d_viewer.conf", QSettings::IniFormat );
    settings.beginGroup("Main_Settings");
    ui->lineEdit->setText(settings.value("lineEdit").toString());
    ui->lineEdit_2->setText(settings.value("lineEdit_2").toString());
    ui->lineEdit_3->setText(settings.value("lineEdit_3").toString());
    path = settings.value("path").toString();
    ui->lineEdit_4->setText(settings.value("lineEdit_4").toString());
    ui->lineEdit_5->setText(settings.value("lineEdit_5").toString());
    ui->lineEdit_6->setText(settings.value("lineEdit_6").toString());
    ui->lineEdit_7->setText(settings.value("lineEdit_7").toString());
    ui->lineEdit_8->setText(settings.value("lineEdit_8").toString());
    ui->lineEdit_9->setText(settings.value("lineEdit_9").toString());
    ui->radioButton->setChecked(settings.value("QCheckBox", true).toBool());
    ui->radioButton_2->setChecked(settings.value("QCheckBox", true).toBool());
    settings.endGroup();
}

void viewer::settings_save() {
    //  Сохраняем настройки
        qDebug() << "save settings...";
        QSettings settings( "s21_3d_viewer.conf", QSettings::IniFormat );
        settings.beginGroup("Main_Settings");
        settings.setValue("lineEdit", ui->lineEdit->text());
        settings.setValue("lineEdit_2", ui->lineEdit_2->text());
        settings.setValue("lineEdit_3", ui->lineEdit_3->text());
        settings.setValue("path", path);
        settings.setValue("lineEdit_4", ui->lineEdit_4->text());
        settings.setValue("lineEdit_5", ui->lineEdit_5->text());
        settings.setValue("lineEdit_6", ui->lineEdit_6->text());
        settings.setValue("lineEdit_7", ui->lineEdit_7->text());
        settings.setValue("lineEdit_8", ui->lineEdit_8->text());
        settings.setValue("lineEdit_9", ui->lineEdit_9->text());
        settings.setValue("QCheckBox", ui->radioButton->isChecked());
        settings.setValue("QCheckBox", ui->radioButton_2->isChecked());
        settings.endGroup();
}

void viewer::on_radioButton_toggled(bool checked)
{
    ui->widget->striple = false;
    ui->widget->update();
}

