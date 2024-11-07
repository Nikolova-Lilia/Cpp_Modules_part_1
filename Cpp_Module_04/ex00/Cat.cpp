#include "Cat.hpp"
//Constructor
Cat::Cat(): Animal() {
    std::cout << BOLDMAGENTA << "Cat Default Constructor called\n" << RESET;
    this->type = "Cat";
}
//Copy Constructor
Cat::Cat(const Cat &copy): Animal() {
    std::cout << BOLDMAGENTA << "Cat Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
Cat::~Cat() {
    std::cout << BOLDMAGENTA <<"Cat Destructor called\n" << RESET;
}
//Copy Constructor
Cat &Cat::operator=(const Cat &src) {
    std::cout << BOLDMAGENTA << "Cat Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);
    
    this->type = src.type;
    return (*this);
}
//Public function
void Cat::makeSound(void)const {
    std::cout << BOLDMAGENTA << this->getType() << " says: Meeeoow\n" << RESET;
}