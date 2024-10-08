#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 fixedPointValue;
        static const int    fractionalBits;
    public:
    /*Constructor*/
        Fixed(void);
    /*Destructor*/
        ~Fixed(void);
    /*Copy Constructor*/
        Fixed(Fixed const &copy);
    /*Assignment Operator*/
        Fixed &operator=(Fixed const &copy);
    /*Getter*/
        int     getRawBits(void) const;
    /*Setter*/
        void    setRawBits(int const raw);
};
#endif