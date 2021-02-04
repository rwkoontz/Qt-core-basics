#include <QCoreApplication>

#include "feline.h"
#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    feline cat;
    lion king;

    cat.speak();
    king.speak();


    return a.exec();
}
