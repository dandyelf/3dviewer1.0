#include "viewer.h"
//#include "scene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    viewer window;
    window.show();
    return a.exec();
}
