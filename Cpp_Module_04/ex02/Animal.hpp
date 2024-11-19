#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

#define RESET "\033[0m"
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDLIGHTBLUE "\033[1m\033[94m"

class Animal {
    protected:
        std::string type;
        Animal();
    public:
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator=(const Animal &src);
        virtual void makeSound(void)const = 0; //Pure Virtual function
        std::string getType(void)const;
};

#endif