#include "Animal.hpp"
//Constructor
Animal::Animal(): type("default") {
    std::cout << BOLDGREEN << "Animal Default Constructor called\n" << RESET;
}
//Copy Constructor
Animal::Animal(const Animal &copy) {
    std::cout << BOLDGREEN << "Animal Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
Animal::~Animal() {
    std::cout << BOLDGREEN << "Animal Destructor called\n" << RESET;
}
//Assignment Operator
Animal &Animal::operator=(const Animal &src) {
    std::cout << BOLDGREEN << "Animal Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);
    
    this->type = src.type;
    return (*this);
}
//Member function
std::string Animal::getType(void)const {
    return (this->type);
}