#include <iostream>
#include "zoo.h"
#include "animal.h"
#include "tigre.h"
#include "poule.h"
#include "aigle.h"

using namespace std;

int main()
{
    zoo.addAnimal(new Tigre);
    zoo.addAnimal(new Tigre);
    zoo.addAnimal(new Tigre);
    zoo.addAnimal(new Poule);
    zoo.addAnimal(new Poule);
    zoo.addAnimal(new Poule);
    zoo.addAnimal(new Aigle);
    zoo.addAnimal(new Aigle);
    zoo.addAnimal(new Aigle);
    zoo.getNumber();
    cout << "" << endl;
    zoo.fire();
    cout << "" << endl;
    zoo.afterFire();
    zoo.getNameAfterFire();
    return 0;
}


