#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define BOLDRED "\033[1m\033[31m" // Bold Red

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        //Constructors
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        //Destructor
        ~WrongAnimal();
        //Assignment Operator
        WrongAnimal &operator=(const WrongAnimal &src);
        //Member function
        void makeSound(void)const;
        //Getter
        std::string getType(void)const;
};

#endif