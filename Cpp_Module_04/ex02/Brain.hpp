#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

#define RESET "\033[0m"
#define BOLDGREEN "\033[1m\033[32m"

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        virtual ~Brain();
        Brain &operator=(const Brain &src);
        const std::string getIdea(size_t i)const;
        void getIdeas(void)const;
        void setIdea(size_t i, std::string idea);
};

#endif