#include <QCoreApplication>
#include <QDebug>

// Pass by value - making a copy
void testVal(int i){
    i = i * 10;
    qInfo() << "I = " << i;
}

// Pass by reference - passing the object
void testRef(int &i){
    i = i * 10;
    qInfo() << "I = " << i;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 5;

    qInfo() << "Testing value:";
    testVal(x);
    qInfo() << "X = " << x;

    qInfo() << "Testing reference:";
    testRef(x);
    qInfo() << "X = " << x;

    return a.exec();
}
