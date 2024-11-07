#include "WrongAnimal.hpp"
//contructor
WrongAnimal::WrongAnimal(): type("wrong default") {
    std::cout << BOLDRED << "WrongAnimal Default Constructor called\n" << RESET;
}
//Copy Constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << BOLDRED << "WrongAnimal Copy Constructor called\n" << RESET;
    *this = copy;
}
//Destructor
WrongAnimal::~WrongAnimal() {
    std::cout << BOLDRED << "WrongAnimal Deconstructor called\n" << RESET;
}
//Assignment Operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << BOLDRED << "WrongAnimal Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);
    
    this->type = src.type;
    return (*this);
}
//Member function
void WrongAnimal::makeSound(void)const {
    std::cout << BOLDRED << this->getType() << " says: WrongAnimal sounds\n" << RESET;
}
//Getter
std::string WrongAnimal::getType(void)const {
    return (this->type);
}