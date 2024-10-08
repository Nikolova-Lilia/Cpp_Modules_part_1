#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int                 fixedPointValue;
        static const int    fractionalBits;
    public:
    /*Constructor*/
        Fixed(void);
    /*Parameterized Constructor*/
        Fixed(const int fixedPointValue);
    /*Parameterized Constructor*/
        Fixed(const float fixedPointValue);
    /*Destructor*/
        ~Fixed(void);
    /*Copy Constructor*/
        Fixed(Fixed const &copy);
    /*Assignment Operator*/
        Fixed  &operator=(Fixed const &copy);
    /*Getter*/
        int     getRawBits(void) const;
    /*Setter*/
        void    setRawBits(int const raw);
    /*Convert functions - to int and to float*/
        float   toFloat(void) const;
        int     toInt(void) const;
};
/*Function declaration for overloading the << operator -
 Allows using << to print Fixed objects in a readoble format*/
std::ostream &operator<<(std::ostream&str, Fixed const &fixed_nbr);

#endif