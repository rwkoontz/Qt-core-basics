#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QDebug>

#include "mammal.h"

class canine : public mammal
{
    Q_OBJECT
public:
    explicit canine(QObject *parent = nullptr);

    void bark() {qInfo() << "woof";}

signals:

};

#endif // CANINE_H
