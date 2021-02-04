#include <QCoreApplication>
#include <QDebug>

void test(QString* value){
    qInfo() << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString* data = new QString("Hello Cruel World!!");

    qInfo() << "Actual size: " << data->length();
    qInfo() << "Pointer size: " << sizeof(data);
    qInfo() << "Data: " << *data;
    qInfo() << "pointer to data: " << sizeof(*data);

    test(data);

    delete data;

    return a.exec();
}
