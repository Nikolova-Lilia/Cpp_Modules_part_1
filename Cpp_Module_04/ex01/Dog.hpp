#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    private:
        Brain *theBrain;
    public:
        //Constructors
        Dog();
        Dog(const Dog &copy);
        //Destructor
        ~Dog();
        //Assignment operator
        Dog &operator=(const Dog &src);
        //Member function
        void makeSound(void)const;
        //Getter
        void getIdeas(void)const;
        //Setter
        void setIdea(size_t i, std::string idea);
};

#endif