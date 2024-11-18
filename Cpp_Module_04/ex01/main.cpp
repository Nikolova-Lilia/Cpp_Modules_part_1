#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "Constructing: \n";
    const Animal *meta[4];
    std::cout << std::endl;
    Cat *firstCat = new Cat();
    std::cout << "Testing first Cat: \n";
    firstCat->setIdea(0, "idea one");
    firstCat->setIdea(1, "one more idea");
    firstCat->setIdea(2, "and more");
    firstCat->getIdeas();

    Cat *secondCat = new Cat(*firstCat);
    std::cout << "Testing second Cat: \n";
    secondCat->getIdeas();
    secondCat->setIdea(0, "Hello again");
    secondCat->setIdea(3, "jumping");
    secondCat->getIdeas();

    meta[0] = firstCat;
    meta[1] = secondCat;

    std::cout << "Constructing: \n";
    Dog *firstDog = new Dog();
    std::cout << "Testing first Dog: \n";
    firstDog->setIdea(0, "eating");
    firstDog->setIdea(1, "sleeping");
    firstDog->setIdea(4, "playing");
    firstDog->getIdeas();

    Dog *secondDog = new Dog(*firstDog);
    std::cout << "Testing second Dog: \n";
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