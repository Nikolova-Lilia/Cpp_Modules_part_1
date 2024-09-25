#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    /* Ponter to a string */
    std::string* stringPTR = &str;
    /* Reference to a string */
    std::string& stringREF = str;

    // String's Memory Address:
    std::cout << "Address of string: " << &str << std::endl;

    // Pointer's Memory Address:
    std::cout << "Address of pointer: " << stringPTR << std::endl;

    // Reference's Memory Address:
    std::cout << "Address of reference: " <<&stringREF << std::endl;

    //  Value of the string
    std::cout << "Value of the string: " << str << std::endl;

    //  Value of the pointer
    std::cout << "Value of the pointer: " << *stringPTR << std::endl;

    //  Value of the reference
    std::cout << "Value of the reference: " << stringREF << std::endl;
    return (0);
}