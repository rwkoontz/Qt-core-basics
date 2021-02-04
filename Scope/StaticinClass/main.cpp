#include <QCoreApplication>

#include "animal.h"

QString animal::name = "";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat(&a, "kitty");
    animal dog(&a,"fido");

    qInfo() << cat.name;

    // static variable is being shared across all uses and overwriting

    return a.exec();
}
