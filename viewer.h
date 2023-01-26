#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Viewer;
}
QT_END_NAMESPACE

extern "C" {
#include "aff_transformation.h"
#include "s21_viewer.h"
}

class Viewer : public QMainWindow {
  Q_OBJECT

 public:
  Viewer(QWidget *parent = nullptr);
  ~Viewer();

  obj_t obj;

private slots:
  void on_pushButton_clicked();

  void on_pushButton_5_clicked();

  void on_radioButton_4_toggled();

  void on_radioButton_3_toggled();

  void on_horizontalScrollBar_valueChanged(int value);

  void on_horizontalScrollBar_2_valueChanged(int value);

  void on_horizontalScrollBar_3_valueChanged(int value);

  void on_horizontalScrollBar_7_valueChanged(int value);

  void on_horizontalScrollBar_4_valueChanged(int value);

  void on_horizontalScrollBar_5_valueChanged(int value);

  void on_horizontalScrollBar_6_valueChanged(int value);

  void on_pushButton_4_clicked();

  void on_pushButton_2_clicked();

//  void on_pushButton_3_clicked();

  void on_horizontalScrollBar_8_valueChanged(int value);

  void on_horizontalScrollBar_11_valueChanged(int value);

  void on_horizontalScrollBar_9_valueChanged(int value);

  void on_horizontalScrollBar_10_valueChanged(int value);

  void on_pushButton_16_clicked();

  void on_pushButton_20_clicked();

  void on_pushButton_19_clicked();

  void on_pushButton_14_clicked();

  void on_pushButton_18_clicked();

  void on_pushButton_17_clicked();

  void on_pushButton_15_clicked();

  void on_pushButton_6_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_9_clicked();

  void on_pushButton_10_clicked();

  void on_pushButton_11_clicked();

  void on_pushButton_12_clicked();

  void on_pushButton_13_clicked();

private:
  Ui::Viewer *ui;

  int dots_{}, lines_{};

  QString path_{};
  QTimer *tmr{};
  QString fname_gif;
  int time_{};
//  QGifImage *gif = new QGifImage;
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
