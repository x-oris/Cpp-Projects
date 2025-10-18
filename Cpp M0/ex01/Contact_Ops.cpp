#include "PhoneBook.hpp"

int Contact_Tools(Contact& con)
{
    std::string input;
    std::cout << "First Name : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return 0;
    if (print_able(input))
        con.setFirstName(input);
    std::cout << "Last Name : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return 0;
    if (print_able(input))
        con.setLastName(input);
    std::cout << "Nick Name : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return 0;
    if (print_able(input))    
        con.setNickName(input);
    std::cout << "Phone Number : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return 0;
    if (print_able(input))
        con.setPhoneNumber(input);
    std::cout << "Dark Secret : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return 0;
    if (print_able(input))
        con.setDarkSecret(input);
    return 1;
}

int Contact_Ops(Contact& con, PhoneBook& phone){
    std::cout << "\033[38;5;208mPlease Fill The Contacts Areas\033[0m" << std::endl;
    while (TRUE)
    {
        if (!Contact_Tools(con))
			return 0;
        else
            break ;
    }
    phone.setContact(con);
    con.reInitializator();
    return 1;
}