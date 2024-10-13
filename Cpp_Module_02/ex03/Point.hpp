#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        //Constructors
        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        //Destructor
        ~Point();
        //Assignment operator
        Point &operator=(const Point &src);
        //Getter
        const Fixed &getX(void)const;
        const Fixed &getY(void)const;
};
//Overload for ostream
std::ostream &operator<<(std::ostream &str, Point const point);
#endif