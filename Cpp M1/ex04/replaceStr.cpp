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

void StringReplace::findReplace(const char *filename)
{
    std::ifstream infile;
    std::ofstream outfile;
    std::ostringstream strstream;

    infile.open(filename, std::ios::in);
    if (!infile){
        std::cout << "Error: Failed To Open The File" << std::endl;
        return ;
    }
    strstream << infile.rdbuf();
    std::string str = strstream.str();
    size_t pos = str.find(s1);
    if (pos == std::string::npos)
    {
        std::cout << "Error: S1 String Was Not Found In The File..." << std::endl;
        infile.close();
        return ;
    }
    while (pos != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos = str.find(s1, pos + s2.length());
    }
    infile.close();
    std::string newfile = filename;
    newfile.append(".replace"); 
    outfile.open(newfile, std::ios::out);
    if (!outfile){
        std::cout << "Error: Opening the outfile <filename>.replace" << std::endl;
        return ;
    }
    outfile << str;
    outfile.close();
    std::cout << "StrReplacer: Replacing Is Done..." << std::endl;
}