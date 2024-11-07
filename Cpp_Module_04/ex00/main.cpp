#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Wrongcat.hpp"

int main(void)
{
    std::cout << "Constructing: \n";
    const Animal* meta = new Animal();
    std::cout << std::endl;
    std::cout << "Testing: \n";

    std::cout << "Animal type: " << meta->getType() << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "Destructing: \n";
    delete meta;
    std::cout << std::endl;

    std::cout << ".........................................................";

    std::cout << std::endl;
    std::cout << "Constructing: \n";
    const Animal* correctDog = new Dog();
    std::cout << std::endl;

    std::cout << "Testing: \n";
    std::cout << "Dog type: " << correctDog->getType() << std::endl;
    correctDog->makeSound();
    std::cout << std::endl;

    std::cout << "Destructing: \n";
    delete correctDog;
    std::cout << std::endl;

    std::cout << ".........................................................";

    std::cout << std::endl;
    std::cout << "Constructing: \n";
    const Animal* correctCat = new Cat();
    std::cout << std::endl;
    std::cout << "Testing: \n";
    std::cout << "Cat type: " << correctCat->getType() << std::endl;
    correctCat->makeSound();
    std::cout << std::endl;

    std::cout << "Destructing: \n";
    delete correctCat;
    std::cout << std::endl;
    std::cout << ".........................................................";
    std::cout << std::endl;

    std::cout << "Constructing: \n";
    const WrongAnimal *wrongMeta = new WrongAnimal();
    std::cout << std::endl;

    std::cout << "Testing: \n";
    std::cout << "Animal type: " << wrongMeta->getType() << std::endl;
    wrongMeta->makeSound();
    std::cout << std::endl;

    std::cout << "Destructing: \n";
    delete wrongMeta;
    std::cout << std::endl;

    std::cout << ".........................................................";
    std::cout << std::endl;

    std::cout << "Constructing: \n";
    const WrongAnimal *wrCat = new WrongCat();
    std::cout << std::endl;

    std::cout << "Testing: \n";
    std::cout << "WrongCat type: " << wrCat->getType() << std::endl;
    wrCat->makeSound();
    std::cout << std::endl;

    std::cout << "Destructing: \n";
    delete wrCat;
    std::cout << std::endl;
    return (0);
}