#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define BOLDYELLOW "\033[1m\033[33m" // Bold Yellow
#define BOLDMAGENTA "\033[1m\033[35m" // Bold Magenta
#define BOLDLIGHTBLUE "\033[1m\033[94m" // Bold Light Blue

class Animal {
    protected:
        std::string type;
    public:
        //Constructors
        Animal();
        Animal(const Animal &copy);
        //Destructors
        virtual ~Animal();
        //Assignment operator
        Animal &operator=(const Animal &src);
        //Member function
        virtual void makeSound(void)const;
        //Getter
        std::string getType(void)const;
};
#endif