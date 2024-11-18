#include "Animal.hpp"
//Constructor
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
//Member function
void Animal::makeSound(void)const {
    std::cout << "This animal doesn't make a sound\n";
}
//Getter
std::string Animal::getType(void)const {
    return (this->type);
}