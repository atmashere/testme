#include "agwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AGWindow w;
    w.show();

    return a.exec();
}
