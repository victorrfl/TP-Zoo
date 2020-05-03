#ifndef TIGRE_H_INCLUDED
#define TIGRE_H_INCLUDED

#include "animal.h"

using namespace std;

class Tigre:public Animal
{

public:
    Tigre();
    virtual void fire();
};



#endif // TIGRE_H_INCLUDED
