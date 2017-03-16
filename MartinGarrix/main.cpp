#include "martingarrix.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MartinGarrix w;
    w.show();

    return a.exec();
}
