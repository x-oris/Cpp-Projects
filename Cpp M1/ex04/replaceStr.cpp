#include "replaceStr.hpp"

int StringReplace::takeString(std::string str1, std::string str2)
{
    if (str1.empty() || str2.empty()){
        std::cerr << "One Of The String Arguments Is Empty..." << std::endl;
        return 1;
    }
    s1 = str1;
    s2 = str2;
    return 0;
}

void StringReplace::findReplace(std::string s1, std::string s2, const char *filename)
{
    std::ifstream infile;
    std::ofstream outfile;
    
    infile.open(filename, std::ios::in);
    if (!infile)
    {
        std::cerr << "Error: Failed To Open The File" << std::endl;
        return ;
    }
    std::string str((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    size_t pos = str.find(s1);
    if (pos == std::string::npos)
    {
        std::cerr << "Error: S1 Was Not Found In The File..." << std::endl;
        return ;
    }
    while (pos != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos = str.find(s1);
    }
    infile.close();
    outfile.open(filename, std::ios::out);
    outfile << str;
    outfile.close();
    std::cout << "StrReplacer: Replacing Is Done..." << std::endl;
}