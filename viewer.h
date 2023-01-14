#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class viewer; }
QT_END_NAMESPACE

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    viewer(QWidget *parent = nullptr);
    ~viewer();

private:
    Ui::viewer *ui;
};
#endif // VIEWER_H
