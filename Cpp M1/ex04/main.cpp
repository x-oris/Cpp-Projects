#include "replaceStr.hpp"

int main()
{
    StringReplace Repstr;

    std::string str1 = "HEREIAM";
    std::string str2 = "NO_AM_NOT";
    if (Repstr.takeString(str1, str2))
        return 1;
    Repstr.findReplace(str1, str2, "testFiles/test");
    return 0;
}