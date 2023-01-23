#include "viewer.h"

#include <QDebug>
#include <QtMath>
#include <QFileDialog>
#include <QSettings>
#include <iostream>
#include "./qtgifimage/gifimage/qgifimage.h"
#include "QKeyEvent"
#include "ui_viewer.h"

viewer::viewer(QWidget *parent) : QMainWindow(parent), ui(new Ui::viewer) {
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);
  ui->pushButton_11->setVisible(0);
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
  obj.test = 0;
  dot.delta_x = 0.0;
  dot.delta_y = 0.0;
  dot.delta_z = 0.0;
  obj.vertexes = nullptr;
  obj.polygons = nullptr;
  setup_defaults();
}

viewer::~viewer() {

  settings_save();
  reset_obj();
  delete ui;
  qDebug() << "viewer destroyed";
}

void viewer::on_pushButton_clicked() {
  fileName = QFileDialog::getOpenFileName(
      this, tr("Open Obj File"), path, tr("OBJ Files (*.obj)"));
  if (fileName != "") {
    qDebug() << fileName;
    ////updates
    file_proccessing(fileName);
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
  double step = ui->lineEdit->text().toDouble();
  if (step)
    dot.delta_y = qFabs(step);
  else
    dot.delta_y = 0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_8_clicked() {
  double step = ui->lineEdit_4->text().toDouble();
  if (step)
    dot.delta_x = qFabs(step);
  else
    dot.delta_x = 0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_7_clicked() {
  double step = ui->lineEdit_3->text().toDouble();
  if (step)
    dot.delta_y = qFabs(step) * (-1);
  else
    dot.delta_y = -0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_6_clicked() {
  double step = ui->lineEdit_2->text().toDouble();
  if (step)
    dot.delta_x = qFabs(step) * (-1);
  else
    dot.delta_x = -0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_radioButton_2_toggled() {
  ui->widget->stipple = true;
  ui->widget->update();
}

void viewer::setup_defaults() { settings_load(); }

void viewer::settings_load() {
  //  Загружаем настройки
  QSettings settings("s21_3d_viewer.conf", QSettings::IniFormat);
  settings.beginGroup("Main_Settings");
  path = settings.value("path").toString();

  ui->radioButton->setChecked(settings.value("QCheckBox", true).toBool());
  ui->radioButton_2->setChecked(settings.value("QCheckBox", true).toBool());
  settings.endGroup();
}

void viewer::settings_save() {
  //  Сохраняем настройки
  qDebug() << "save settings...";
  QSettings settings("s21_3d_viewer.conf", QSettings::IniFormat);
  settings.beginGroup("Main_Settings");
  settings.setValue("path", path);

  settings.setValue("QCheckBox", ui->radioButton->isChecked());
  settings.setValue("QCheckBox", ui->radioButton_2->isChecked());
  settings.endGroup();
}

void viewer::on_radioButton_toggled() {
  ui->widget->stipple = false;
  ui->widget->update();
}

void viewer::keyPressEvent(QKeyEvent *e) {
  switch (e->key()) {
    case (Qt::Key_Left):
      qDebug() << "Left pressed";
      on_pushButton_7_clicked();
      break;
    case (Qt::Key_Right):
      qDebug() << "Rigth pressed";
      on_pushButton_8_clicked();
      break;
    case (Qt::Key_Up):
      qDebug() << "Up pressed";
      on_pushButton_5_clicked();
      break;
    case (Qt::Key_Down):
      qDebug() << "Down pressed";
      on_pushButton_6_clicked();
      break;
  }
}

void viewer::on_horizontalSlider_3_valueChanged(int value) {
  ui->widget->fon_r = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_4_valueChanged(int value) {
  ui->widget->fon_g = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_5_valueChanged(int value) {
  ui->widget->fon_b = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::reset_obj() {
  qDebug() << "reset obj...";
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
  obj.test = 0;
  if (obj.vertexes != NULL) free(obj.vertexes);
  if (obj.polygons != NULL) free(obj.polygons);
  obj.vertexes = NULL;
  obj.polygons = NULL;
}

void viewer::file_proccessing(QString fileName)
{
    path = fileName;
    this->setWindowTitle(this->windowTitle() + "~" + fileName);
    ui->label_3->setText(path.section('/', -1, -1));
    ui->label_7->setText("Число вершин");
    ui->label_8->setText("Число линий");
    this->setWindowTitle("3D Viewer ~" + fileName);
    ////
    /// \brief tmp
    ///
    QByteArray tmp = fileName.toLocal8Bit();
    char *file = tmp.data();

    reset_obj();
    int err = StartPars(file, &obj);

    if (err) {
       qDebug() << "i am in..";
      ////scaling block
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
      ////set stats
      ui->label_9->setText(QString::number(obj.count_of_vertexes));
      ui->label_10->setText(QString::number(obj.count_of_facets));
      ////end stats
      ////set main data
      ui->widget->set_vertex_arr(obj.vertexes);
      ui->widget->set_facets_arr(obj.polygons);
      ui->widget->set_lines(err);
      ui->widget->set();
      ui->widget->update();
      ////end data set
    }
}

void viewer::on_horizontalSlider_valueChanged(int value) {
  ui->widget->line_width = (double)value;
  ui->widget->update();
}

void viewer::on_horizontalSlider_2_valueChanged(int value) {
  ui->widget->line_r = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_6_valueChanged(int value) {
  ui->widget->line_g = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_7_valueChanged(int value) {
  ui->widget->line_b = ((double)value) / 100.0;
  ui->widget->update();
}

void viewer::on_pushButton_15_clicked() {
    reset_obj();
    file_proccessing(fileName);
}

void viewer::on_pushButton_12_pressed() // JPEG сохранение
{
    QString file = QFileDialog::getSaveFileName(this, "Save as...", "name", "BMP (*.bmp);; JPEG (*.jpeg)");
        ui->widget->grab().save(file);
}


void viewer::on_pushButton_13_pressed()  //  Начать запись для gif
{
    flag = 1;
}


void viewer::on_pushButton_14_pressed()  //  Закончить запись
{
    flag = 0;
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save screenshot"), "", tr("GIF screenshot (*.gif);;GIF screenshot (*.gif)"));
        QGifImage gif(QSize(5000, 5000));
        QVector<QRgb> ctable;
        ctable << qRgb(255, 255, 255)
               << qRgb(0, 0, 0)
               << qRgb(255, 0, 0)
               << qRgb(0, 255, 0)
               << qRgb(0, 0, 255)
               << qRgb(255, 255, 0)
               << qRgb(0, 255, 255)
               << qRgb(255, 0, 255);

        gif.setGlobalColorTable(ctable, Qt::black);
        gif.setDefaultTransparentColor(Qt::black);
        gif.setDefaultDelay(100);

        for (QVector<QImage>::Iterator img = mas_image.begin(); img != mas_image.end(); ++img) {
            gif.addFrame(*img);
        }
        gif.save(fileName);

}

void viewer::on_horizontalSlider_9_valueChanged(int value)
{
    ui->widget->dot_r = (double) value / 100.0;
    ui->widget->update();
}


void viewer::on_horizontalSlider_8_valueChanged(int value)
{
    ui->widget->dot_width = value;
    ui->widget->update();
}


void viewer::on_horizontalSlider_10_valueChanged(int value)
{
    ui->widget->dot_g = (double) value / 100.0;
    ui->widget->update();
}


void viewer::on_horizontalSlider_11_valueChanged(int value)
{
    ui->widget->dot_b = (double) value / 100.0;
    ui->widget->update();
}

