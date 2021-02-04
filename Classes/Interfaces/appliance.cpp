#include "appliance.h"

appliance::appliance(QObject *parent) : QObject(parent)
{

}


bool appliance::cooks()
{
    return true;
}

bool appliance::grills()
{
    return true;
}

bool appliance::freeze()
{
    return true;
}
