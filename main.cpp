#include <QApplication>

#include "visualtree.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  VisualTree w;
  w.show();

  return a.exec();
}
