#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "myname";

    qInfo() << "my name is at : " << &name << " = " << name;

    animal cat(&a,"fluffy");
    animal dog(&a,"fido");
    animal person(&a,name);

    return a.exec();
}
