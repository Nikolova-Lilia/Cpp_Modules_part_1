#include <iostream>
#include "Zombie.h"

int main(void) {
    int size;

    size = 15;
    Zombie* horde = zombieHorde(size, "Foo");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}