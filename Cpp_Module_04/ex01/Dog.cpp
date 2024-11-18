#include "Dog.hpp"
// Default Constructor
Dog::Dog() : Animal()
{
    std::cout << BOLDYELLOW << "Dog Default Constructor called\n" << RESET;
    this->type = "Dog";
    try
    {
        this->theBrain = new Brain();
        std::cout << BOLDYELLOW << "Dog brain created\n" << RESET;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDYELLOW << "Dog Brain allocation failed. Exiting...\n"
                  << e.what() << std::endl << RESET;
        exit(1); // exit the program with an error code
    }
}
// Copy constructor
Dog::Dog(const Dog &copy) : Animal()
{
    std::cout << BOLDYELLOW << "Dog Copy Constructor called\n" << RESET;
    *this = copy;
}
// Destructor
Dog::~Dog()
{
    delete (this->theBrain);
    std::cout << BOLDYELLOW << "Dog Destructor called\n" << RESET;
}
// Assignment operator
Dog &Dog::operator=(const Dog &src)
{
    std::cout << BOLDYELLOW << "Dog Assignment operator called\n" << RESET;
    if (this == &src)
        return (*this);

    this->type = src.type;
    try
    {
        this->theBrain = new Brain();
        std::cout << BOLDYELLOW << "Dog brain created\n" << RESET;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDYELLOW << "Dog Brain allocation failed. Exiting...\n"
                  << e.what() << std::endl << RESET;
        exit(1); // exit the program with an error code
    }
    *this->theBrain = *src.theBrain;
    return (*this);
}
// Member function
void Dog::makeSound(void) const
{
    std::cout << BOLDYELLOW << this->getType() << " says: Woof\n" << RESET;
}
// Getter
void Dog::getIdeas(void) const
{
    std::cout << BOLDYELLOW << "Dog ideas are: \n" << RESET;
    this->theBrain->getIdeas();
}
//Setter
void Dog::setIdea(size_t i, std::string idea) {
    this->theBrain->setIdea(i, idea);
}