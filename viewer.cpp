#include "viewer.h"

#include <QDebug>
#include <QFileDialog>
#include <QSettings>
#include <QtMath>
#include <iostream>

#include "QKeyEvent"
#include "ui_viewer.h"

viewer::viewer(QWidget *parent) : QMainWindow(parent), ui(new Ui::viewer) {
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);
  ui->pushButton_11->setVisible(0);
  obj.count_of_vertexes = 0;
  obj.count_of_facets = 0;
  obj.facet_elem = 0;
  //  dot.delta_x = 0.0;
  //  dot.delta_y = 0.0;
  //  dot.delta_z = 0.0;
  obj.vertexes = nullptr;
  obj.polygons = nullptr;
  gif->setDefaultDelay(10);
  tmr->setInterval(100);
  connect(tmr, SIGNAL(timeout()), this, SLOT(gifFile()));
  setup_defaults();
}

viewer::~viewer() {
  settings_save();
  reset_obj();
  delete ui;
  qDebug() << "viewer destroyed";
}

void viewer::on_pushButton_clicked() {
  fileName = QFileDialog::getOpenFileName(this, tr("Open Obj File"), path,
                                          tr("OBJ Files (*.obj)"));
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
  obj.facet_elem = 0;
  if (obj.vertexes != NULL) free(obj.vertexes);
  if (obj.polygons != NULL) free(obj.polygons);
  obj.vertexes = NULL;
  obj.polygons = NULL;
}

void viewer::file_proccessing(QString fileName) {
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

  if (!err) {
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

    for (int i = 0; i < obj.count_of_facets * 3; ++i) {
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
    ui->widget->set_lines(obj.facet_elem);
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

void viewer::on_pushButton_12_pressed()  // JPEG сохранение
{
  QString file = QFileDialog::getSaveFileName(this, "Save as...", "name.jpg",
                                              "JPEG (*.jpeg) ;; BMP (*.bmp) ");
  QImage image = ui->widget->grabFramebuffer();
  image.save(file, nullptr, 80);
}

void viewer::on_pushButton_13_pressed()  //  Начать запись для gif
{
  QString filters("GIF (*.gif)");
  QString defaultFilter("GIF (*.gif)");
  //    fname_gif = "";
  QString path2 = path + ".gif";
  fname_gif = QFileDialog::getSaveFileName(this, tr("Save GIF"), path2,
                                           tr("Gif Files (*.gif)"));
  if (fname_gif != "") {
    wtimer();
  } else {
    error_message("Нет папки");
  }
}

void viewer::error_message(QString message) {
  QMessageBox messageBox;
  messageBox.critical(0, "Info", message);
  messageBox.setFixedSize(500, 200);
}

void viewer::wtimer() { tmr->start(); }

void viewer::gifFile() {
  ++time;
  QImage image = ui->widget->grabFramebuffer();
  gif->addFrame(image);
  if (time == 50) {
    tmr->stop();
    gif->save(fname_gif);
    time = 0;
    error_message("Gif saved.");
  }
  ui->label_2->setText(QString::number(time / 10));
}

void viewer::on_horizontalSlider_9_valueChanged(int value) {
  ui->widget->dot_r = (double)value / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_8_valueChanged(int value) {
  ui->widget->dot_width = value;
  ui->widget->update();
}

void viewer::on_horizontalSlider_10_valueChanged(int value) {
  ui->widget->dot_g = (double)value / 100.0;
  ui->widget->update();
}

void viewer::on_horizontalSlider_11_valueChanged(int value) {
  ui->widget->dot_b = (double)value / 100.0;
  ui->widget->update();
}

void viewer::on_pushButton_Move_clicked() {
  double mv_xpos = ui->lineEdit_4->text().toDouble();
  double mv_xneg = ui->lineEdit_3->text().toDouble();
  double mv_ypos = ui->lineEdit->text().toDouble();
  double mv_yneg = ui->lineEdit_2->text().toDouble();
  double mv_zpos = ui->lineEdit_Zpos->text().toDouble();
  double mv_zneg = ui->lineEdit_Zneg->text().toDouble();
  mv_xneg *= -1;
  mv_yneg *= -1;
  mv_zneg *= -1;
  move_x(&obj, mv_xpos);
  move_x(&obj, mv_xneg);
  move_y(&obj, mv_ypos);
  move_y(&obj, mv_yneg);
  move_z(&obj, mv_zpos);
  move_z(&obj, mv_zneg);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_8_clicked() {
  //  double step = ui->lineEdit_4->text().toDouble();
  //  if (step)
  //    dot.delta_x = qFabs(step);
  //  else
  //    dot.delta_x = 0.5;
  //  shift_dot(&obj, dot);
  //  ui->widget->set_vertex_arr(obj.vertexes);
  //  ui->widget->update();
  double mv = ui->lineEdit_4->text().toDouble();
  move_x(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_7_clicked() {
  //  double step = ui->lineEdit_3->text().toDouble();
  //  if (step)
  //    dot.delta_y = qFabs(step) * (-1);
  //  else
  //    dot.delta_y = -0.5;
  //  shift_dot(&obj, dot);
  //  ui->widget->set_vertex_arr(obj.vertexes);
  //  ui->widget->update();
  double mv = ui->lineEdit_3->text().toDouble();
  mv *= -1;
  move_x(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_5_clicked() {
  //  double step = ui->lineEdit->text().toDouble();
  //  if (step)
  //    dot.delta_y = qFabs(step);
  //  else
  //    dot.delta_y = 0.5;
  //  shift_dot(&obj, dot);
  //  ui->widget->set_vertex_arr(obj.vertexes);
  //  ui->widget->update();
  double mv = ui->lineEdit->text().toDouble();
  move_y(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_6_clicked() {
  //  double step = ui->lineEdit_2->text().toDouble();
  //  if (step)
  //    dot.delta_x = qFabs(step) * (-1);
  //  else
  //    dot.delta_x = -0.5;
  //  shift_dot(&obj, dot);
  //  ui->widget->set_vertex_arr(obj.vertexes);
  //  ui->widget->update();
  double mv = ui->lineEdit_2->text().toDouble();
  mv *= -1;
  move_y(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_Zpos_clicked() {
  double mv = ui->lineEdit_Zpos->text().toDouble();
  move_z(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_Zneg_clicked() {
  double mv = ui->lineEdit_Zneg->text().toDouble();
  mv *= -1;
  move_z(&obj, mv);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_Scale_clicked() {
  double kx = ui->lineEdit_ScaleX->text().toDouble();
  double ky = ui->lineEdit_ScaleY->text().toDouble();
  double kz = ui->lineEdit_ScaleZ->text().toDouble();
  if (!kx || !ky || !kz) {
    ui->statusbar->showMessage("FAIL: Коэффициент масштаба равен 0!");
  } else {
    scale_x(&obj, kx);
    scale_y(&obj, ky);
    scale_z(&obj, kz);
    ui->statusbar->clearMessage();
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_ScaleX_clicked() {
  double koff = ui->lineEdit_ScaleX->text().toDouble();
  if (scale_x(&obj, koff)) {
    ui->statusbar->showMessage("FAIL: Коэффициент масштаба равен 0!");
  } else {
    ui->statusbar->clearMessage();
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_ScaleY_clicked() {
  double koff = ui->lineEdit_ScaleY->text().toDouble();
  if (scale_y(&obj, koff)) {
    ui->statusbar->showMessage("FAIL: Коэффициент масштаба равен 0!");
  } else {
    ui->statusbar->clearMessage();
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_ScaleZ_clicked() {
  double koff = ui->lineEdit_ScaleZ->text().toDouble();
  if (scale_z(&obj, koff)) {
    ui->statusbar->showMessage("FAIL: Коэффициент масштаба равен 0!");
  } else {
    ui->statusbar->clearMessage();
  }
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_Turn_clicked() {
  double ax = ui->lineEdit_TurnX->text().toDouble();
  double ay = ui->lineEdit_TurnY->text().toDouble();
  double az = ui->lineEdit_TurnZ->text().toDouble();
  turn_x(&obj, ax);
  turn_y(&obj, ay);
  turn_z(&obj, az);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_TurnX_clicked() {
  double angle = ui->lineEdit_TurnX->text().toDouble();
  turn_x(&obj, angle);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_TurnY_clicked() {
  double angle = ui->lineEdit_TurnY->text().toDouble();
  turn_y(&obj, angle);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}

void viewer::on_pushButton_TurnZ_clicked() {
  double angle = ui->lineEdit_TurnZ->text().toDouble();
  turn_z(&obj, angle);
  ui->widget->set_vertex_arr(obj.vertexes);
  ui->widget->update();
}
