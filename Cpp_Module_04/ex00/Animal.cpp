#include "Animal.hpp"
//Constructor
Animal::Animal(): type("default") {
    std::cout << BOLDLIGHTBLUE << "Animal Default Constructor called\n" << RESET;
}
//Copy Constructor
Animal::Animal(const Animal &copy) {
    std::cout << BOLDLIGHTBLUE << "Animal Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
Animal::~Animal() {
    std::cout << BOLDLIGHTBLUE << "Animal Destructor called\n" << RESET;
}
//Assignment Operator
Animal &Animal::operator=(const Animal &src) {
    std::cout << BOLDLIGHTBLUE << "Animal Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);
    
    this->type = src.type;
    return (*this);
}
//Member function
void Animal::makeSound(void)const {
    std::cout << BOLDLIGHTBLUE << "This animal doesn't make a sound\n" << RESET;
}
//Getter
std::string Animal::getType(void)const {
    return (this->type);
}