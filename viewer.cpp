#include "viewer.h"

#include <QDebug>
#include <QFileDialog>
#include <QSettings>
#include <iostream>

#include "QKeyEvent"
#include "ui_viewer.h"

viewer::viewer(QWidget *parent) : QMainWindow(parent), ui(new Ui::viewer) {
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;

  dot.delta_x = 0.0;
  dot.delta_y = 0.0;
  dot.delta_z = 0.0;

  obj.vertexes = NULL;
  obj.polygons = NULL;
  setup_defaults();
}

viewer::~viewer() {
  settings_save();
  reset_obj();
  delete ui;
}

void viewer::on_pushButton_clicked() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open Obj File"), path, tr("OBJ Files (*.obj)"));
  if (fileName != "") {
    qDebug() << fileName;
    ////updates
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
    int err = readobj(file, &obj);

    if (err != -1) {
      ////scaling block
      double max_el = 0.0;
      for (int i = 0; i < obj.count_of_vertexes; i++) {
        if (max_el < obj.vertexes[i]) max_el = obj.vertexes[i];
      }

      for (int i = 0; i < (obj.count_of_vertexes) * 3; i++) {
        obj.vertexes[i] /= max_el;
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
  dot.delta_y = 0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_8_clicked() {
  dot.delta_x = 0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_7_clicked() {
  dot.delta_y = -0.5;
  shift_dot(&obj, dot);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_6_clicked() {
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
  QSettings settings("s21_3d_viewer.conf", QSettings::IniFormat);
  settings.beginGroup("Main_Settings");
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

void viewer::on_lineEdit_4_textChanged(const QString &arg1) {
  ui->widget->line_r = arg1.toDouble();
  ui->widget->update();
}

void viewer::on_lineEdit_5_textChanged(const QString &arg1) {
  ui->widget->line_g = arg1.toDouble();
  ui->widget->update();
}

void viewer::on_lineEdit_6_textChanged(const QString &arg1) {
  ui->widget->line_b = arg1.toDouble();
  ui->widget->update();
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
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
  if (obj.vertexes != NULL) free(obj.vertexes);
  if (obj.polygons != NULL) free(obj.polygons);
  obj.vertexes = NULL;
  obj.polygons = NULL;
}
