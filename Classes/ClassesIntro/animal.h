#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class animal : public QObject
{
    Q_OBJECT
public:
    animal(QObject *parent = nullptr);

    void speak(QString message);
};

#endif // ANIMAL_H
