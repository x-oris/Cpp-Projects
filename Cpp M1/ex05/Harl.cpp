#include "Harl.hpp"

// Harl tools
void Harl::debug(){
    std::cout << "I really love when the code runs smoothly, no compilation errors, or segfaults !" << std::endl;
}

void Harl::info(){
    std::cout << "Make sure, to pass variables by their addresses, we dont want to modifiy copies !" << std::endl;
}

void Harl::warning(){
    std::cout << "The index of the main loop, is not initilized, thanks god, the kernel initilized it with zero from start !" << std::endl;
}

void Harl::error(){
    std::cout << "There we go ! a segfault ! i already pinned out that index for you ! Initilize that variable NOW !" << std::endl;
}

void Harl::complain(std::string level)
{
    Harl obj;
    int index = 0;
    std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "NOTHING"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    void (Harl::*ptr)();
    
    while (index < 5){
        if (!levels[index].compare(level))
            break ;
        index++;
    }
    if (index == 5){
        std::cerr << "Error: The provided level is not available..." << std::endl;
        return ;
    }
    (obj.*functions[index])();
}
