#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:

    public:
        //constructors
        WrongCat();
        WrongCat(const WrongCat &copy);
        //Destructor
        ~WrongCat();
        //Assignment operator
        WrongCat &operator=(const WrongCat &src);
        //Member function
        void makeSound(void)const;
};

#endif