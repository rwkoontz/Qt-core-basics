#include <QCoreApplication>
#include <QDebug>
#include "animal.h"
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // create parent
    test* parent = new test(&a);
    parent->dog = new animal(parent);

    delete parent; // deconstructing parent causes all children to be deconstructed as well

    return a.exec();
}
