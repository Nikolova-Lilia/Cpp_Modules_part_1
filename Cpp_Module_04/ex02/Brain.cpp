#include "Brain.hpp"
//Constructor
Brain::Brain() {
    std::cout << "Brain Default Constructor called\n";
}
//Copy Constructor
Brain::Brain(const Brain &copy) {
    std::cout << "Brain Copy Constructor called\n";
    *this = copy;
}
//Destructor
Brain::~Brain() {
    std::cout << "Brain Destructor called\n";
}
//Assignment Operator
Brain &Brain::operator=(const Brain &src) {
    std::cout << "Brain Assignment Operator called\n";
    if (this == &src)
        return (*this);
    
    for (int i = 0; i < 100; i++)
    {
        if (src.ideas[i].length() > 0)
            this->ideas[i].assign(src.ideas[i]);
    }
    return (*this);
}
//Getter
const std::string Brain::getIdea(size_t i)const {
    if (i < 100)
        return (this->ideas[i]);
    else
        return ("There is only 100 ideas per brain\n");
}
//Setter
void Brain::setIdea(size_t i, std::string idea) {
    if (i < 100)
        this->ideas[i] = idea;
    else
        std::cout << "There is only 100 ideas per brain\n";
}
//Getter
void Brain::getIdeas(void)const {
    for (int i = 0; i < 100; i++) {
        if (this->getIdea(i).length() > 0)
            std::cout << BOLDGREEN << "\tIdea " << i << " is: \"" << this->getIdea(i) << "\"\n" << RESET;
    }
}