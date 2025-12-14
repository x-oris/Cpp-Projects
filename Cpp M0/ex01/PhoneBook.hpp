#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Con[MAX_CONTACTS];
        long    Max_Index;
        long    Rolls;
    public:
    // Setters
        void    setContact(Contact cont);
        void    setMaxIndex(long ind);
        void    setRollsNumber(long roll);
    // Getters
        Contact getContact(long ind);
        long    getMaxIndex(void);
        long    getRollsNumber(void);
};

// Tools
void    ExpandIndex(Contact con);
long    S_cLong(std::string input);
int	    print_able(std::string input);
int     Repositories(PhoneBook phone);
int     Contact_Ops(Contact con, PhoneBook& phone);

#endif