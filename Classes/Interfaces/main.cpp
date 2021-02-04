#include <QCoreApplication>

#include <QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance Kitchen5000;
    qInfo() << "Can it cook: " << Kitchen5000.cooks();

    qInfo() << "Can it grill" << Kitchen5000.grills();
    qInfo() << "Can it freeze: " << Kitchen5000.freeze();

    return a.exec();
}
