#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>

class Cat: public Animal {
    private:
        Brain *theBrain;
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &src);
        void makeSound(void)const;
        void getIdeas(void)const;
        void setIdea(size_t i, std::string idea);
};
#endif