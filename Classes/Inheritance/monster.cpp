#include "monster.h"
// moc does not allow inheritance like this although c++ does
monster::monster(QObject *parent) : canine(parent), feline(parent)
{

}
