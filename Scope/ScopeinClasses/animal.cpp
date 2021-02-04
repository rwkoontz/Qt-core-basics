#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << "animal name parameter: " << &name << " = " << name;
    qInfo() << "Animal name this-> " << &this->name << " = " << this->name;


}
