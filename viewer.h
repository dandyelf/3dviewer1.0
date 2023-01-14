#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class viewer; }
QT_END_NAMESPACE

extern "C" {
    #include <read_obj.h>
}

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    viewer(QWidget *parent = nullptr);
    ~viewer();


private slots:
    void on_pushButton_clicked();

private:
    Ui::viewer *ui;
    obj_file * obj;

};
#endif // VIEWER_H
