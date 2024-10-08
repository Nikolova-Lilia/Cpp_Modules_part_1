#include "Fixed.hpp"
/* Key diferences between default Constructor behavior 
    and a Copy constructor - the default initializes a new 
    object without copying from an existing one. 
    The copy constructor will *create a new object that is
    separate instance, but with the same initial state as
    the origin. After creation the two object can behave differently
    as they are independent. Changes to one object won't affect the other. */

const int   Fixed::fractionalBits = 8;

/* Constructor */
Fixed::Fixed(void): fixedPointValue(0){
    std::cout << "Default constructor called. Fixed point number object created - value set to 0.\n";
}
/* Destructor */
Fixed::~Fixed(void) {
    std::cout << "Destructor called - Fixed point number object destroyed\n";
}
/* Copy Constructor*/
Fixed::Fixed(Fixed const &copy) {
    std::cout << "Copy constructor called - fixed point number object successfully copied\n";
    *this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy) {
    std::cout << "Assignment operator called\n";
    this->fixedPointValue = copy.getRawBits();
    return (*this);
}

/* GEtter function get's the value and passed it */
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (this->fixedPointValue);
}
/* Setter function - sets the value */
void    Fixed::setRawBits(const int raw) {
    this->fixedPointValue = raw;
}
