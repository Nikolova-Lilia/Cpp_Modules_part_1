#include "Point.hpp"

//Constructors
Point::Point(): x(0), y(0) {
    //std::cout << "Point Default Constructor called\n";
}
Point::Point(const float x, const float y): x(x), y(y) {
    //std::cout << "Constructor called\n";
}
Point::Point(const Point &copy): x(copy.getX()), y(copy.getY()) {
    //std::cout << "Point Copy Constructor called\n";
    *this = copy;
}
//Destructor
Point::~Point() {
    //std::cout << "Point Destructor called\n";
}
//Assignment operator
Point   &Point::operator=(const Point &src) {
    //std::cout << "Point Assignment operator called\n";
    if (this == &src)
        return (*this);
    return (*this);
}
//Getter
const Fixed &Point::getX(void)const {
    return (this->x);
}
const Fixed &Point::getY(void)const {
    return (this->y);
}
//overload for ostream
std::ostream &operator<<(std::ostream &str, Point const point) {
    str << "x: " << point.getX() << " / y: " << point.getY() << std::endl;
    return (str);
}
