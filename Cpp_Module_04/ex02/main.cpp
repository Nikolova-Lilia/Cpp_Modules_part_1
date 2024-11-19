#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
    //first step checking if the base class is instantiable - it should not be.
    //Meaning we cannot create an animal from the base.

    //const Animal *animal = new Animal();
    //animal->makeSound();

    //below again deep copy testing to show that everything else is working properly
    std::cout << std::endl;
    std::cout << "\033[34mConstructing: \033[0m" << std::endl;
    const Animal *meta[4];
    std::cout << std::endl;
    Cat *firstCat = new Cat();
    std::cout << "\033[34mTesting first Cat: \033[0m" << std::endl;
    firstCat->setIdea(0, "idea one");
    firstCat->setIdea(1, "one more idea");
    firstCat->setIdea(2, "and more");
    firstCat->getIdeas();

    Cat *secondCat = new Cat(*firstCat);
    std::cout << "\033[34mTesting second Cat: \033[0m" << std::endl;
    secondCat->getIdeas();
    secondCat->setIdea(0, "Hello again");
    secondCat->setIdea(3, "jumping");
    secondCat->getIdeas();

    meta[0] = firstCat;
    meta[1] = secondCat;

    std::cout << "\033[34mConstructing: \033[0m" << std::endl;
    Dog *firstDog = new Dog();
    std::cout << "\033[34mTesting first Dog: \033[0m" << std::endl;
    firstDog->setIdea(0, "eating");
    firstDog->setIdea(1, "sleeping");
    firstDog->setIdea(4, "playing");
    firstDog->getIdeas();

    Dog *secondDog = new Dog(*firstDog);
    std::cout << "\033[34mTesting second Dog: \033[0m" << std::endl;
    secondDog->getIdeas();
    secondDog->setIdea(0, "swimming");
    secondDog->setIdea(2, "barking");
    secondDog->getIdeas();

    meta[2] = firstDog;
    meta[3] = secondDog;

    for (int i = 0; i < 4; i++) {
        if (meta[i]->getType() == "Cat")
            ((Cat*)meta[i])->getIdeas();
        else
            ((Dog*)meta[i])->getIdeas();
        delete meta[i];
    }
}