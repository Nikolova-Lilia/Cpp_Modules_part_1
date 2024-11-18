#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    private:
        //their own brain attribute
        Brain *theBrain;
    public:
        //Constructors
        Cat();
        Cat(const Cat &copy);
        //Destructor
        ~Cat();
        //Assignment Operator
        Cat &operator=(const Cat &src);
        //Member function
        void makeSound(void)const;
        //Getter
        void getIdeas(void)const;
        //Setter
        void setIdea(size_t i, std::string idea);
};
#endif