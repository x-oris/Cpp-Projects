#include "PhoneBook.hpp"

int verify_input(std::string input, int mode)
{
    if (mode == PhoneNumber)
    {
        if (print_able(input))
        {
            for (int i = 0; input[i]; i++){
                if (!(input[i] >= '0' && input[i] <= '9'))
                    return (false);
            }
        }
        else
            return (false);
    }
    if (mode == All)
    {
        if (!print_able(input))
            return (false);
    }
    return (true);
}

int Contact_Tools(Contact& con)
{
    std::string input;
    while (TRUE)
    {
        std::cout << "First Name : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 0;
        if (verify_input(input, All) == false)
            continue;
        con.setFirstName(input);
        break ;
    }
    while (TRUE)
    {
        std::cout << "Last Name : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 0;
        if (verify_input(input, All) == false)
            continue;
        con.setLastName(input);
        break ;
    }
    while (TRUE)
    {
        std::cout << "Nick Name : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 0;
        if (verify_input(input, All) == false)
            continue;
        con.setNickName(input);
        break ;
    }
    while (TRUE)
    {
        std::cout << "Phone Number : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 0;
        if (verify_input(input, PhoneNumber) == false)
            continue;
        con.setPhoneNumber(input);
        break ;
    }
    while (TRUE)
    {
        std::cout << "Dark Secret : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 0;
        if (verify_input(input, All) == false)
            continue;
        con.setDarkSecret(input);
        break ;
    }
    return 1;
}

int Contact_Ops(Contact con, PhoneBook& phone)
{
    std::cout << "\033[38;5;208mPlease Fill The Contacts Areas\033[0m" << std::endl;
    while (TRUE)
    {
        if (!Contact_Tools(con))
			return 0;
        else
            break ;
    }
    phone.setContact(con);
    return 1;
}