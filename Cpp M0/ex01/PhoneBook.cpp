#include "PhoneBook.hpp"

// Setters
void    PhoneBook::setContact(Contact Cont)
{
    Con[Rolls] = Cont;
    Rolls++;
    if (Max_Index <= 7)
        Max_Index++;
    if (Rolls >= 8){
        Rolls = 0;
    }
}

void    PhoneBook::setMaxIndex(long ind){
    Max_Index = ind;
}
void    PhoneBook::setRollsNumber(long roll){
    Rolls = roll;
}

// Getters
Contact PhoneBook::getContact(long ind){
    return (Con[ind]);
}
long    PhoneBook::getMaxIndex(){
    return (Max_Index);
}
long    PhoneBook::getRollsNumber(){
    return (Rolls);
}