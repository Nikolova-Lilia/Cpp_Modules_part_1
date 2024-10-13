#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
    float aX, aY, bX, bY, cX, cY, pointX, pointY;
    
    std::cout << "Enter X coordinate for point a: \n";
    std::cin >> aX;
    std::cout << "Enter Y coordinate for point a: \n";
    std::cin >> aY;
    std::cout << "Enter X coordinate for point b: \n";
    std::cin >> bX;
    std::cout << "Enter Y coordinate for point b: \n";
    std::cin >> bY;
    std::cout << "Enter X coordinate for point c: \n";
    std::cin >> cX;
    std::cout << "Enter Y coordinate for point c: \n";
    std::cin >> cY;
    std::cout << "Enter X coordinate for the point to check: \n";
    std::cin >> pointX;
    std::cout << "Enter Y coordinate for the point to check: \n";
    std::cin >> pointY;

    Point a(aX, aY);
    Point b(bX, bY);
    Point c(cX, cY);
    Point point(pointX, pointY);

    if (bsp(a, b, c, point))
        std::cout << "TRUE: Point is inside the triangle." << std::endl;
    else
        std::cout << "FALSE: Point is not inside the triangle." << std::endl;
    // {
    //     const Point a;
    //     const Point b(10, 0);
    //     const Point c(0, 10);
    //     const Point point(1, 1);

    //     std::cout << "The point( x = " << point.getX() << "\t\ty= " 
    //     << point.getY() << "\t) is inside the triangle\n" 
    //     << "\ta( x= " << a.getX() << "\t\ty= " << a.getY() << "\t)\n"
    //     << "\tb( x = " << b.getX() << "\ty= " << b.getY() << "\t)\n"
    //     <<"\tc( x= " << c.getX() << "\t\ty= " << c.getY() << "\t)\n" << std::endl;
    //     if (bsp(a, b ,c, point) == true)
    //         std::cout << "\033[32mTRUE\033[0m" << std::endl;
    //     else
    //         std::cout << "\033[31mFALSE\033[0m" << std::endl;
    // }
    // std::cout << "\n----------------------------------------\n" << std::endl;
    // {
    //     Point a(-1.5, -1.5);
    //     Point b(2.5, 2.5);
    //     Point c(-1, -2);
    //     Point point(8.5, -9);

    //     std::cout << "The point( x= " << point.getX() << "\ty= " << point.getY()
    //     << "\t) is inside the triangle\n" << "\ta ( x= " << a.getX() << "\ty= "
    //     << a.getY() << "\t)\n" << "\tb( x= " << b.getX() << "\ty= " << b.getY()
    //     << "\t)\n" << "\tc( x= " << c.getX() << "\ty= " << c.getY() << "\t)\n" << std::endl;
    //     if (bsp(a, b, c, point) == true)
    //         std::cout << "\033[32mTRUE\033[0m" << std::endl;
    //     else
    //         std::cout << "\033[31mFALSE\033[0m" << std::endl;
    // }
    return (0);
}