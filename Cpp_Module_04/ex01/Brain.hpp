#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        //Constructors
        Brain();
        Brain(const Brain &copy);
        //Destructor
        virtual ~Brain();
        //Assignment Operators
        Brain &operator=(const Brain &src);
        //Getter
        const std::string getIdea(size_t i)const;
        void getIdeas(void)const;
        //Setter
        void setIdea(size_t i, std::string idea);
};

#endif