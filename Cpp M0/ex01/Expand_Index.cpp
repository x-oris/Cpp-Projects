#include "PhoneBook.hpp"

long    S_cLong(std::string input)
{
    long i = 0;
    long sign = 1;
    long res = 0;

    if (!input.compare(i, 1, "-") || !input.compare(i, 1, "+")){
        if (!input.compare(i , 1, "-"))
            sign = -1;
        i++;
    }
    if (!isdigit(input[i]))
        return -1;
    while (input[i]){
        if (res > (LLONG_MAX - (input[i] - '0')) / 10)
            return -1;
        res = res * 10 + (input[i] - '0');
        i++;
    }
    return res * sign;
}

void    ExpandIndex(Contact con)
{
    std::cout << "\033[31mFirst Name :> \033[0m";
    std::cout << con.getFirstName() << std::endl;
    std::cout << "\033[31mLast Name :> \033[0m";
    std::cout << con.getLastName() << std::endl;
    std::cout << "\033[31mNick Name :> \033[0m";
    std::cout << con.getNickName() << std::endl;
    std::cout << "\033[31mPhone Number :> \033[0m";
    std::cout << con.getPhoneNumber() << std::endl;
    std::cout << "\033[31mDark Secret :> \033[0m";
    std::cout << con.getDarkSecret() << std::endl;
}