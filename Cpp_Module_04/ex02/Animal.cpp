#include "Animal.hpp"
//Default Contructor
/*
    The def constructor is in the protected section, which means it can only be accessed
    by derived classes. This is done to prevent direct instantiation of the Animal class
    making it an abstract class.
*/
/*
    Abstract class is a class that cannot be instantiated on its own and is meant to be a
    class for other classes. It typically contains at least one pure virtual function.
*/
Animal::Animal(): type("default") {
    std::cout << "Animal Default Constructor called\n";
}
//Copy Constructor
Animal::Animal(const Animal &copy) {
    std::cout << "Animal Copy Constructor called\n";
    *this = copy;
}
//Destructor
Animal::~Animal() {
    std::cout << "Animal Destructor called\n";
}
//Assignment Operator
Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal Assignment operator called\n";
    if (this == &src)
        return (*this);
    
    this->type = src.type;
    return (*this);
}
/*  Pure Virtual function
    virtual void makeSound(void) const = 0; is a pure virtual function. This means that
    any class must provide an implementation for this function. The = 0 syntax indicates
    that this function has no implementation in the Animal class. Hance why below is expty.*/
//Member function
void Animal::makeSound(void) const {}
//Getter
std::string Animal::getType(void)const {
    return (this->type);
}