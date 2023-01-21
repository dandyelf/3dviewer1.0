#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class viewer;
}
QT_END_NAMESPACE

extern "C" {
#include <read_obj.h>
#include <aff_transformation.h>
}

class viewer : public QMainWindow {
  Q_OBJECT

 public:
  viewer(QWidget *parent = nullptr);
  ~viewer();
  obj_t obj;

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_6_clicked();

  void on_pushButton_9_clicked();

  void on_pushButton_10_clicked();

private:
  Ui::viewer *ui;
  int dots = 0, lines = 0;
  void settings_load();
  void setup_defaults();
  void settings_save();
};
#endif  // VIEWER_H
