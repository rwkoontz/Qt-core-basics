#include <QCoreApplication>

#include <QDebug>

void test(int number){
    //int number = 50;
    qInfo() << "Test number is at: " << &number << " = " << number;

}

void testRef(int &number){
    //int number = 50;
    qInfo() << "Test number is at: " << &number << " = " << number;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "Test number is at: " << &number << " = " << number;

    //test(number);
    test(number);
    testRef(number);

    return a.exec();
}
