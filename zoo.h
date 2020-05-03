#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED

#include "animal.h"

#include <vector>
#include <string>

using namespace std;

typedef vector <Animal*> AnimalList;

typedef AnimalList::iterator AnimalIterator;

class Zoo
{

    AnimalList m_animals;
public:
    void getNumber();
    void addAnimal(Animal* animal);
    void fire();
    void afterFire();
    void getNameAfterFire();
};


#endif // ZOO_H_INCLUDED
