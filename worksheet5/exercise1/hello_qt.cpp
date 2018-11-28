#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    window.resize(250, 150);
    window.setWindowTitle("Hello_Qt");
    window.show();
    return a.exec();
}
