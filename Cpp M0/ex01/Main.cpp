#include "PhoneBook.hpp"

int	print_able(std::string input){
	for (int i = 0; input[i]; i++){
		if (input[i] > 126 || input[i] < 32)
			return 0;
	}
	return 1;
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
		return (std::cout << "Contact Store Does Not Accept Arguments" << std::endl, 1);
    
	Contact Con;
	PhoneBook Phone;
	Phone.setMaxIndex(0);
	Phone.setRollsNumber(0);
	std::string input;
	std::cout << "\033[38;5;208mWelcome to the contacts store, Options we offer, ADD, SEARCH, EXIT...\033[0m" << std::endl;
	while (TRUE)
	{
		std::cout << "\033[38;5;208mPlease Enter An Option...: \033[0m";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (std::cout << "Contact Store Closed" << std::endl, 1);
		else if (!input.compare(EXIT))
			return (std::cout << "\033[31mContact Store Closed\033[0m" << std::endl, 0);
		else if (!input.compare(ADD) && !Contact_Ops(Con, Phone))
			return (std::cout << "Contact Store Closed" << std::endl, 1);
		else if (!input.compare(SEARCH) && !Repositories(Phone)){
			return (std::cout << "Contact Store Closed" << std::endl, 1);
		}
	}
	return 0;
}

/*
	add EXIT command to the Searching STATE...
*/