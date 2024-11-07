#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
    private:

    public:
        //Constructors
        Cat();
        Cat(const Cat &copy);
        //Destructor
        ~Cat();
        //Assignment Operator
        Cat &operator=(const Cat &src);
        //Memeber function
        void makeSound(void)const;
};
#endif