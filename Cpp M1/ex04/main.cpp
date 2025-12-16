#include "replaceStr.hpp"

int main(int argc, char **argv)
{
    if (argc != 4){
        std::cout << "Error: One of this components is missing: <filename> | String1 | String2..." << std::endl;
        return 1;
    }
    StringReplace Repstr;
    if (Repstr.takeString(argv[2], argv[3]))
        return 1;
    Repstr.findReplace(argv[1]);
    return 0;
}