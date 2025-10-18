CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
SRC = PhoneBook.cpp Contact.cpp \
		Contact_Ops.cpp Expand_Index.cpp Repositories.cpp Main.cpp
HEADER = PhoneBook.hpp Contact.hpp
NAME = PhoneBook
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