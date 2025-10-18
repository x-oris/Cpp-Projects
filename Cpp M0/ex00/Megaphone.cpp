#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);

    for (int x = 1; x < argc; x++)
    {
        for (int y = 0; argv[x][y]; y++)
        {
            if (islower(argv[x][y]))
                argv[x][y] = argv[x][y] - 32;
        }
        std::cout << argv[x];
    }
    std::cout << std::endl;
    return 0;
}