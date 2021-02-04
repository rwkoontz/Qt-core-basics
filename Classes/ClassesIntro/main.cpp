#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat;
    animal dog;
    animal bird;

    cat.speak("meow");
    dog.speak("woof");
    bird.speak("cheep cheep");

    return a.exec();
}
