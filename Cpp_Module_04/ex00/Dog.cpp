#include "Dog.hpp"
//constructor
Dog::Dog(): Animal() {
    this->type = "Dog";
    std::cout << BOLDYELLOW << "Dog Default Constructor called\n" << RESET;
}
//Copy Constructor
Dog::Dog(const Dog &copy): Animal() {
    std::cout << BOLDYELLOW << "Dog Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
Dog::~Dog() {
    std::cout << BOLDYELLOW << "Dog Destructor called\n" << RESET;
}
//Assignment operator
Dog &Dog::operator=(const Dog &src) {
    std::cout << BOLDYELLOW << "Dog Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);
    this->type = src.type;
    return (*this);
}
//Memeber function
void Dog::makeSound(void)const {
    std::cout << BOLDYELLOW <<this->getType() << " says: Woof\n" << RESET;
}
