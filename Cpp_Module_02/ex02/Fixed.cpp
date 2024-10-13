#include "Fixed.hpp"

const int   Fixed::fractionalBits = 8;

//Default Constructor
Fixed::Fixed(void): fixedPointValue(0) {
    std::cout << "Default constructor called\n";
}
//Parameterized Constructor for integer
Fixed::Fixed(const int input) {
    std::cout << "Int constructor called\n";
    this->fixedPointValue = input << this->fractionalBits;
}
//Parameterized Constructor for float
Fixed::Fixed(const float input) {
    std::cout << "Float constructor called\n";
    this->fixedPointValue = roundf(input * (1 << this->fractionalBits));
}
//Copy Constructor
Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    *this = copy;
}
//Destructor
Fixed::~Fixed(void) {
    std::cout << "Destructor called\n";
}
//Assignment operator
Fixed &Fixed::operator=(const Fixed &src) {
    std::cout << "Copy assignment operator called\n";
    if (this != &src)
        this->fixedPointValue = src.getRawBits();
    return (*this);
}
//Getter
int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called\n"
    return (this->fixedPointValue);
}
//Setter
void    Fixed::setRawBits(const int raw) {
    this->fixedPointValue = raw;
}
//Convert function to float
float   Fixed::toFloat(void) const {
    return((float)this->fixedPointValue / (float)(1 << this->fractionalBits));
}
//Convert function to integer
int Fixed::toInt(void) const {
    return (this->fixedPointValue >> fractionalBits);
}
//Comparison Operators
bool    Fixed::operator>(Fixed fixed) const {
    return (this->toFloat() > fixed.toFloat());
}
bool    Fixed::operator<(Fixed fixed) const {
    return (this->toFloat() < fixed.toFloat());
}
bool    Fixed::operator>=(Fixed fixed) const {
    return (this->toFloat() >= fixed.toFloat());
}
bool    Fixed::operator<=(Fixed fixed) const {
    return (this->toFloat() <= fixed.toFloat());
}
bool    Fixed::operator==(Fixed fixed) const {
    return (this->toFloat() == fixed.toFloat());
}
bool    Fixed::operator!=(Fixed fixed) const {
    return (this->toFloat() != fixed.toFloat());
}
//Arithmetic Operators
float   Fixed::operator+(Fixed fixed) const {
    return (this->toFloat() + fixed.toFloat());
}
float   Fixed::operator-(Fixed fixed) const {
    return (this->toFloat() - fixed.toFloat());
}
float   Fixed::operator*(Fixed fixed) const {
    return (this->toFloat() * fixed.toFloat());
}
float   Fixed::operator/(Fixed fixed) const {
    return (this->toFloat() / fixed.toFloat());
}
//pre-increment && pre-decrement Operators
Fixed   Fixed::operator++() {
    this->fixedPointValue++;
    return (*this);
}
Fixed   Fixed::operator--() {
    this->fixedPointValue--;
    return (*this);
}
//post-increment && post-decrement Operators
Fixed   Fixed::operator++(int) {
    Fixed temp = *this;
    ++this->fixedPointValue;
    return (temp);
}
Fixed   Fixed::operator--(int) {
    Fixed temp = *this;
    --this->fixedPointValue;
    return (temp);
}
// Public overloaded member functions
Fixed &Fixed::min(Fixed &first, Fixed &second) {
    if (first.toFloat() <= second.toFloat())
        return (first);
    else
        return (second);
}
const Fixed &Fixed::min(Fixed const &first, Fixed const &second) {
    if (first.toFloat() <= second.toFloat())
        return (first);
    else
        return (second);
}
Fixed &Fixed::max(Fixed &first, Fixed &second) {
    if (first.toFloat() >= second.toFloat())
        return (first);
    else
        return (second);
}
const Fixed &Fixed::max(Fixed const &first, const Fixed &second) {
    if (first.toFloat() >= second.toFloat())
        return (first);
    else
        return (second);
}
//overload for ostream
std::ostream &operator<<(std::ostream&str, Fixed const &fixedNbr) {
    return (str << fixedNbr.toFloat());
}
