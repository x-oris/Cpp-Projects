CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ClapTrap.cpp
HEADER = ClapTrap.hpp
NAME =	ClapTrap
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all