#ifndef REPSTR_HPP
#define REPSTR_HPP

#include <iostream>
#include <fstream>

class StringReplace
{
    private:
        std::string s1;
        std::string s2;
    public:
        int     takeString(std::string str1, std::string str2);
        void    findReplace(std::string s1, std::string s2, const char *filename);
};

#endif