#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
    private:

    public:
        //Constructors
        Dog();
        Dog(const Dog &copy);
        //Destructor
        ~Dog();
        //Assignment Operator
        Dog &operator=(const Dog &src);
        //Memeber function
        void makeSound(void) const;
};
#endif