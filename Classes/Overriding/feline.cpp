#include "feline.h"

feline::feline(QObject *parent) : animal(parent)
{

}

void feline::speak()
{
    qInfo() << "meow";
}
