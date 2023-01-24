#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>
#include "./qtgifimage/gifimage/qgifimage.h"
#include <QTimer>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class viewer;
}
QT_END_NAMESPACE

extern "C" {
#include <s21_viewer.h>
#include <aff_transformation.h>
#include <read_obj.h>
}

class viewer : public QMainWindow {
  Q_OBJECT

 public:
  viewer(QWidget *parent = nullptr);
  ~viewer();
  obj_t obj;
  dot_t dot;
  int flag;
  QVector<QImage> mas_image;

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_6_clicked();

  void on_radioButton_2_toggled();

  void on_radioButton_toggled();

  void keyPressEvent(QKeyEvent *) override;

  void on_horizontalSlider_3_valueChanged(int value);

  void on_horizontalSlider_4_valueChanged(int value);

  void on_horizontalSlider_5_valueChanged(int value);

  void on_horizontalSlider_valueChanged(int value);

  void on_horizontalSlider_2_valueChanged(int value);

  void on_horizontalSlider_6_valueChanged(int value);

  void on_horizontalSlider_7_valueChanged(int value);

  void on_pushButton_15_clicked();

  void on_pushButton_12_pressed();

  void on_pushButton_13_pressed();

  void gifFile();

 private:
  Ui::viewer *ui;
  int dots = 0, lines = 0;
  QString path = "/Users/";

  QTimer *tmr = new QTimer();
  QGifImage *gif = new QGifImage;
  QString fname_gif;
  int time = 0;

  void settings_load();
  void setup_defaults();
  void settings_save();
  void reset_obj();
  QString fileName;
  void file_proccessing(QString file_name);
  void wtimer();
  void error_message(QString message);
};
#endif  // VIEWER_H
