#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

void printMessage(int maxNum){
    for (int i = 0; i < maxNum; i++){
        qInfo() << "Hello World";
    }
}

int HowManyTimes(){
    int maxNum;
    cout << "Enter the maximum: " << endl;
    cin >> maxNum;
    return maxNum;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printMessage(HowManyTimes());

    return a.exec();
}
