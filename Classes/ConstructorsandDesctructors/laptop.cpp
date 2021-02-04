#include "laptop.h"
#include <QDebug>

laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
   // called when created - "this" is automatically created
    this->weight = 0;
    this->name = name;
    qInfo() << this << name << " constructed";
}

laptop::~laptop()
{
    // called when destroyed
    qInfo() << this << name << " de-constructed";
}

double laptop::asKilograms()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilograms();
}
