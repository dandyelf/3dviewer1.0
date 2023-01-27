#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>

#include "./qtgifimage/gifimage/qgifimage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class viewer;
}
QT_END_NAMESPACE

extern "C" {
// #include <s21_viewer.h>
// #include <aff_transformation.h>
// #include <read_obj.h>
#include "aff_transformation.h"
#include "s21_viewer.h"
}

class viewer : public QMainWindow {
  Q_OBJECT

 public:
  viewer(QWidget *parent = nullptr);
  ~viewer();
  obj_t obj;
//  dot_t dot;

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_radioButton_2_toggled();

  void on_radioButton_toggled();

  void keyPressEvent(QKeyEvent *) override;

  void on_horizontalScrollBar_3_valueChanged(int value);

  void on_horizontalScrollBar_4_valueChanged(int value);

  void on_horizontalScrollBar_5_valueChanged(int value);

  void on_horizontalScrollBar_valueChanged(int value);

  void on_horizontalScrollBar_2_valueChanged(int value);

  void on_horizontalScrollBar_6_valueChanged(int value);

  void on_horizontalScrollBar_7_valueChanged(int value);

  void on_pushButton_15_clicked();

  void on_pushButton_12_pressed();

  void on_pushButton_13_pressed();

  void gifFile();

  void on_horizontalScrollBar_9_valueChanged(int value);

  void on_horizontalScrollBar_8_valueChanged(int value);

  void on_horizontalScrollBar_10_valueChanged(int value);

  void on_horizontalScrollBar_11_valueChanged(int value);

  void on_pushButton_Move_clicked();
  void on_pushButton_8_clicked();
  void on_pushButton_7_clicked();
  void on_pushButton_5_clicked();
  void on_pushButton_6_clicked();
  void on_pushButton_Zpos_clicked();
  void on_pushButton_Zneg_clicked();
  void on_pushButton_Scale_clicked();
  void on_pushButton_ScaleX_clicked();
  void on_pushButton_ScaleY_clicked();
  void on_pushButton_ScaleZ_clicked();
  void on_pushButton_Turn_clicked();
  void on_pushButton_TurnX_clicked();
  void on_pushButton_TurnY_clicked();
  void on_pushButton_TurnZ_clicked();
  void on_radioButton_3_toggled();
  void on_radioButton_4_toggled();

private:
  Ui::viewer *ui;
  int dots = 0, lines = 0;
  QString path = "/Users/";
  QTimer *tmr = new QTimer();
  QString fname_gif;
  int time = 0;
  QGifImage *gif = new QGifImage;
  void wtimer();
  void settings_load();
  void setup_defaults();
  void settings_save();
  void reset_obj();
  QString fileName;
  void file_proccessing(QString file_name);
  void error_message(QString message);
};
#endif  // VIEWER_H
