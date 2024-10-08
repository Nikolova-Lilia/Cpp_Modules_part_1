#include "Fixed.hpp"

const int   Fixed::fractionalBits = 8;

static float    ft_pow(float base, int exponent) {
    float   result;

    //any number raised to the power of 0 is 1
    if (!exponent)
        return (1);
    //it inverts the base and makes exponent positive
    if (exponent < 0)
    {
        base = 1 / base;
        exponent *= -1;
    }
    result = base;
    for (int i = 0; i < exponent; i++)
        result *= base;
    return (result);
}

/*Constructor*/
Fixed::Fixed(void): fixedPointValue(0) {
    std::cout << "Default Constructor called.\n";
}
/*Parameterized Constructor for integer*/
Fixed::Fixed(const int fixedPointValue): fixedPointValue(fixedPointValue * ft_pow(2, this->fractionalBits)) {
    std::cout << "Parameterized Constructor called for integer.\n";
}
/*Parameterized Constructor for float*/
Fixed::Fixed(const float fixedPointValue): fixedPointValue(fixedPointValue * ft_pow(2, this->fractionalBits)) {
    std::cout << "Parameterized Constructor called for float.\n";
}
/*Destructor*/
Fixed::~Fixed(void) {
    std::cout << "Destructor called.\n";
}
/*Copy Constructor*/
Fixed::Fixed(Fixed const &copy) {
    std::cout << "Copy constructor called.\n";
    *this = copy;
}
/*Assignment operator*/
Fixed &Fixed::operator=(Fixed const &copy) {
    std::cout << "Assignment operator called.\n";
    this->fixedPointValue = copy.getRawBits();
    return (*this);
}
/*Getter*/
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called.\n";
    return (this->fixedPointValue);
}
/*Setter*/
void    Fixed::setRawBits(const int raw) {
    this->fixedPointValue = raw;
}