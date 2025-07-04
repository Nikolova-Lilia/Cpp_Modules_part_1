#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>

class Dog: public Animal {
    private:
        Brain *theBrain;
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &src);
        void makeSound(void)const;
        void getIdeas(void)const;
        void setIdea(size_t i, std::string idea);
};

#endif