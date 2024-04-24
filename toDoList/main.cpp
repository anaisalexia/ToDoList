#include "toDoList.h"
#include <QtWidgets/QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Init display"; //works
    QApplication a(argc, argv);
    toDoList w;
    w.show();
    return a.exec();
}
