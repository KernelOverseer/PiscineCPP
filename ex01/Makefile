NAME = phonebook

SRC = main.cpp\
	Contact.cpp\
	PhoneBook.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all