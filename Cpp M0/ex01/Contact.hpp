#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <limits.h>

# define MAX_CONTACTS 8

# define All 1
# define TRUE 11
# define ADD "ADD"
# define EXIT "EXIT"
# define PhoneNumber 0
# define SEARCH "SEARCH"

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string phone_nbr;
        std::string dark_sec;
    public:
    // Setters
        void    setFirstName(std::string first_name);
        void    setLastName(std::string last_name);
        void    setNickName(std::string nick_name);
        void    setPhoneNumber(std::string phone_number);
        void    setDarkSecret(std::string dark_secret);
    // Getters
        std::string    getFirstName(void);
        std::string    getLastName(void);
        std::string    getNickName(void);
        std::string    getPhoneNumber(void);
        std::string    getDarkSecret(void);
};

#endif