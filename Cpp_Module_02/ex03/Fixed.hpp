#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
    private:
        int                 fixedPointValue;
        static const int    fractionalBits;
    public:
        //Constructors
        Fixed(void);
        Fixed(const int input);
        Fixed(const float input);
        Fixed(const Fixed &copy);
        //Destructor
        ~Fixed(void);
        //Assignment Operator
        Fixed &operator=(const Fixed &src);
        //Getter
        int     getRawBits(void) const;
        //Setter
        void    setRawBits(const int raw);
        //Convert functions
        float   toFloat(void) const;
        int     toInt(void) const;
        //Comparison Operators
        bool    operator>(Fixed fixed)const;
        bool    operator<(Fixed fixed)const;
        bool    operator>=(Fixed fixed)const;
        bool    operator<=(Fixed fixed)const;
        bool    operator==(Fixed fixed)const;
        bool    operator!=(Fixed fixed)const;
        //Arithmetic Operators
        float   operator+(Fixed fixed)const;
        float   operator-(Fixed fixed)const;
        float   operator*(Fixed fixed)const;
        float   operator/(Fixed fixed)const;
        //pre-increment && pre-decrement Operators
        Fixed   operator++();
        Fixed   operator--();
        //post-increment && post-decrement Operators
        Fixed   operator++(int);
        Fixed   operator--(int);
        //Public overloaded member functions
        static Fixed &min(Fixed &first, Fixed &second);
        static const Fixed &min(Fixed const &first, Fixed const &second);
        static Fixed &max(Fixed &first, Fixed &second);
        static const Fixed &max(Fixed const &first, const Fixed &second);        
};
std::ostream &operator<<(std::ostream&str, Fixed const &fixedNbr);
#endif