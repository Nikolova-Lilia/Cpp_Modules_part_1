#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:

    public:
        //Constructors
        WrongCat();
        WrongCat(const WrongCat &copy);
        //Destructor
        ~WrongCat();
        //Assignment Operator
        WrongCat &operator=(const WrongCat &src);
        //Member function
        void makeSound(void)const;
};
#endif