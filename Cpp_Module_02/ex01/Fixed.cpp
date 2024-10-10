#include "Fixed.hpp"

const int   Fixed::fractionalBits = 8;

/*Constructor*/
Fixed::Fixed(void): fixedPointValue(0) {
    std::cout << "Default constructor called\n";
}
/*Parameterized Constructor for integer*/
Fixed::Fixed(const int input) {
    std::cout << "Int constructor called\n";
    this->fixedPointValue = input << this->fractionalBits;
}
/*Parameterized Constructor for float*/
Fixed::Fixed(const float input) {
    std::cout << "Float constructor called\n";
    this->fixedPointValue = roundf(input * (1 << this->fractionalBits));
}
/*Destructor*/
Fixed::~Fixed(void) {
    std::cout << "Destructor called\n";
}
/*Copy Constructor*/
Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    *this = copy;
}
/*Assignment operator*/
Fixed &Fixed::operator=(const Fixed &src) {
    std::cout << "Copy assignment operator called\n";
    if (this != &src)
        this->fixedPointValue = src.getRawBits();
    return (*this);
}
/*Getter*/
int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called.\n";
    return (this->fixedPointValue);
}
/*Setter*/
void    Fixed::setRawBits(const int raw) {
    this->fixedPointValue = raw;
}
/*Convert functions - to float*/
float   Fixed::toFloat(void) const {
    return ((float)this->fixedPointValue / (float)(1 << this->fractionalBits));
}
/*Convert functions - to integer*/
int     Fixed::toInt(void) const {
    return (this->fixedPointValue >> fractionalBits);
}
/*Function declaration for overloading the << operator -
 Allows using << to print Fixed objects in a readoble format*/
std::ostream    &operator<<(std::ostream&str, Fixed const &fixedNbr) {
    return (str << fixedNbr.toFloat());
}
