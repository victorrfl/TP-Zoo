#ifndef AIGLE_H
#define AIGLE_H

#include "animal.h"

using namespace std;

class Aigle:public Animal
{
public:
    Aigle();
    virtual void fire();
};

#endif // AIGLE_H
