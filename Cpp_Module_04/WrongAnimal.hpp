#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define RESET "\033[0m"
#define BOLDRED "\033[1m\033[31m"

class WrongAnimal {
    protected:
        std::string type;
    public:
        //Constructors
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        //Destructor
        ~WrongAnimal();
        //Assignment operator
        WrongAnimal &operator=(const WrongAnimal &src);
        //Member function
        void makeSound(void)const;
        //Getter
        std::string getType(void)const;
};
#endif