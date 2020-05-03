#include <iostream>
#include <vector>
#include "zoo.h"

using namespace std;

Zoo::Zoo()

{

}

void Zoo::getNumber()
{
    cout << m_animals.size() << " Animaux dans le zoo" << endl;
}

void Zoo::getNameAfterFire()
{

    for(unsigned int i = 0; i <= m_animals.size() ; i++)
        if (i == m_animals.size())
        {
    cout << "Il reste " << m_animals.size() - i << " animaux" << endl;
    }
}

void Zoo::addAnimal(Animal *animal)
{
    m_animals.push_back(animal);
}

void Zoo::fire()
{
    AnimalIterator it = m_animals.begin();
    while(it != m_animals.end()){
        (*it)->fire();
        it++;
    }
}

void Zoo::afterFire()
{
    cout << "Le zoo a brûlé, les aigles on réussit à fuir !" << endl;
}
