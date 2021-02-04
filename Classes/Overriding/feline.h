#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include "animal.h"

class feline : public animal
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);

    void speak();

signals:

};

#endif // FELINE_H
