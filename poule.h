#ifndef POULE_H_INCLUDED
#define POULE_H_INCLUDED

#include "animal.h"

using namespace std;


class Poule:public Animal
{
public:
    Poule();
    virtual void fire();
};


#endif // POULE_H_INCLUDED
