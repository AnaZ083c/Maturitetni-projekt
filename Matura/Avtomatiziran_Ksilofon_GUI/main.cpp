#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setFixedSize(923, 242);
    w.setWindowTitle("Avtomatiziran Ksilofon GUI");
    w.show();

    return a.exec();
}
