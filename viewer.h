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
  dot_t dot;

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_6_clicked();

//  void on_pushButton_9_clicked();

//  void on_pushButton_10_clicked();

  void on_radioButton_2_toggled(bool checked);

  void on_radioButton_toggled(bool checked);

  void keyPressEvent(QKeyEvent *) override;

  void on_lineEdit_4_textChanged(const QString &arg1);

  void on_lineEdit_5_textChanged(const QString &arg1);

  void on_lineEdit_6_textChanged(const QString &arg1);

//  void on_lineEdit_textChanged(const QString &arg1);

//  void on_lineEdit_2_textChanged(const QString &arg1);

//  void on_lineEdit_3_textChanged(const QString &arg1);

  void on_horizontalSlider_3_valueChanged(int value);

  void on_horizontalSlider_4_valueChanged(int value);

  void on_horizontalSlider_5_valueChanged(int value);

private:
  Ui::viewer *ui;
  int dots = 0, lines = 0;
  QString path = "/Users/";
  void settings_load();
  void setup_defaults();
  void settings_save();
};
#endif  // VIEWER_H
