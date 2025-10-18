#include "Contact.hpp"

// Setters
void    Contact::setFirstName(std::string first_name){
    f_name = first_name;
}
void    Contact::setLastName(std::string last_name){
    l_name = last_name;
}
void    Contact::setNickName(std::string nick_name){
    n_name = nick_name;
}
void    Contact::setPhoneNumber(std::string phone){
    phone_nbr = phone;
}
void    Contact::setDarkSecret(std::string dark_secret){
    dark_sec = dark_secret;
}

// Getters
std::string     Contact::getFirstName(){
    return (f_name);
}
std::string     Contact::getLastName(){
    return (l_name);
}
std::string     Contact::getNickName(){
    return (n_name);
}
std::string     Contact::getPhoneNumber(){
    return (phone_nbr);
}
std::string     Contact::getDarkSecret(){
    return (dark_sec);
}

// Re_Init
void    Contact::reInitializator(void){
    f_name = "";
    l_name = "";
    n_name = "";
    phone_nbr = "";
    dark_sec = "";
}