#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argc > 1 && argv[j])
    {
        i = 0;
        while (argv[j][i])
        {
            std::cout << (char)std::toupper(argv[j][i]);
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return (0);
}