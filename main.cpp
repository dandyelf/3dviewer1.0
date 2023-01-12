#include "glwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    glwidget w;
    w.show();
    return a.exec();
}
