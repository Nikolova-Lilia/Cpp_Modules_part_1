#include "WrongCat.hpp"
//Constructor
WrongCat::WrongCat(): WrongAnimal() {
    std::cout << BOLDRED << "WrongCat Default Constructor called\n" << RESET;
    this->type = "WrongCat";
}
//Copy Constructor
WrongCat::WrongCat(const WrongCat &copy): WrongAnimal() {
    std::cout << BOLDRED << "WrongCat Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
WrongCat::~WrongCat() {
    std::cout << BOLDRED << "Wrongcat Destructor called\n" << RESET;
}
//Assignment Operator
WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << BOLDRED << "WrongCat Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);

    this->type = src.type;
    return (*this);
}
//Member function
void WrongCat::makeSound(void)const {
    std::cout << BOLDRED << this->getType() << " says: WrongCat sounds\n" << RESET;
}