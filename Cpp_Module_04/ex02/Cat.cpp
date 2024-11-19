#include "Cat.hpp"
// Default Constructor
/*  try and catch are part of C++ exception handling mechanism.
    The try block contains code that might throw an exception,
    and the catch block handles the exception if one is thrown.
*/
Cat::Cat() : Animal()
{
    std::cout << BOLDMAGENTA << "Cat Default Constructor called\n"
              << RESET;
    this->type = "Cat";
    try
    {
        this->theBrain = new Brain();
        std::cout << BOLDMAGENTA << "Cat brain created\n"
                  << RESET;
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDMAGENTA << "Cat brain allocation failed. Exiting...\n"
                  << e.what() << std::endl
                  << RESET;
        exit(1); // exiting the program with an error code
    }
}
// Copy constructor
Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << BOLDMAGENTA << "Cat Copy Constructor called\n"
              << RESET;
    *this = copy;
}
// Destructor
Cat::~Cat()
{
    delete (this->theBrain);
    std::cout << BOLDMAGENTA << "Cat Destructor called\n" << RESET;
}
// Assignment Operator
Cat &Cat::operator=(const Cat &src)
{
    std::cout << BOLDMAGENTA << "Cat Assignment operator called\n"
              << RESET;
    if (this == &src)
        return (*this);

    this->type = src.type;
    try
    {
        this->theBrain = new Brain();
        std::cout << "Cat brain created\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << BOLDMAGENTA << "Cat Brain allocation failed. Exiting..." << e.what() << std::endl
                  << RESET;
        exit(1); // exit the program with an error code
    }
    *this->theBrain = *src.theBrain;
    return (*this);
}
//Member function
void Cat::makeSound(void)const {
    std::cout << BOLDMAGENTA << this->getType() << " says: Meeeoow\n" << RESET;
}
//Getter
void Cat::getIdeas(void)const {
    std::cout << BOLDMAGENTA << "Cat ideas are: \n" << RESET;
    this->theBrain->getIdeas();
}
//Setter
void Cat::setIdea(size_t i, std::string idea) {
    this->theBrain->setIdea(i, idea);
}