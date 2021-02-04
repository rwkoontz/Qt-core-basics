#include <QCoreApplication>

#include "laptop.h"

void test(laptop &machine){
    machine.test();
}

void makeLaptops(QObject *parent){
    laptop mine(parent,"my laptop");
    laptop yours(parent, "your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours); // no pass by value because QObject cannot be copied - built in memory management protection

    // stack will delete values at the end of function scope
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops(&a);

    return a.exec();
}
