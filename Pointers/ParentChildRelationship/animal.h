#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr); // null pointer is a zeroed pointer
    ~animal();

signals:

};

#endif // ANIMAL_H
