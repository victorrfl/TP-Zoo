#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>

using namespace std;

class Animal
{
public:
    Animal();
    virtual void fire() = 0;

};

#endif // IANIMAL_H
