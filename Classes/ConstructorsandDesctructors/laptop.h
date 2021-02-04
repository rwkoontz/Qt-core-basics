#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>

class laptop : public QObject
{
    Q_OBJECT
public:
    // constructor
    laptop(QObject *parent = nullptr, QString name = "");

    // deconstructor
    ~laptop();

    int weight;
    QString name;
    double asKilograms();
    void test();
};

#endif // LAPTOP_H
