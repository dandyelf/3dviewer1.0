#include <QApplication>

#include "viewer.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  viewer window;
  window.show();
  return a.exec();
}
