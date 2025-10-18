#include "PhoneBook.hpp"

void    Printerattr(std::string attr)
{
    if (attr.length() > 10){
        attr.resize(9);
        attr.push_back('.');
    }
    for (size_t x = 0; x < 10 - attr.length(); x++)
            std::cout << " ";
    std::cout << attr;
}

int    Contact_Indexes(PhoneBook phone)
{
    Contact Con;
    long index = 0;
    std::string input;

    std::cout << "Select One Of The Contacts Or Type 99 To Get The Main Menu" << std::endl;
    while (TRUE)
    {
        std::cout << "=> ";
        std::getline(std::cin, input);
        if (S_cLong(input) == 99)
            return 1;
        if (std::cin.eof())
            return 0;
        if (S_cLong(input) <= 0 || S_cLong(input) > 8){
            std::cout << "Please Enter An Index In The Range Of Availables Contacts." << std::endl;
            continue ;
        }
        index = S_cLong(input);
        ExpandIndex(phone.getContact(index - 1));
    }
    return 1;
}

int    Repositories(PhoneBook phone)
{
    if (phone.getMaxIndex() == 0){
        std::cout << "\033[31mNo Contact Is Available For Now..., Try ADD.\033[0m" << std::endl;
        return 1;
    }
    std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
    for (int i = 1; i <= phone.getMaxIndex(); i++)
    {
        std::cout << "         ";
        std::cout << i; 
        std::cout << "|";
        Printerattr(phone.getContact(i - 1).getFirstName());
        std::cout << "|";
        Printerattr(phone.getContact(i - 1).getLastName());
        std::cout << "|";
        Printerattr(phone.getContact(i - 1).getNickName());
        std::cout << std::endl;
    }
    if (!Contact_Indexes(phone))
        return 0;
    return 1;
}