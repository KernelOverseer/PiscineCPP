NAME = megaphone
SOURCES = megaphone.cpp
INCLUDES =
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra

.PHONY: all
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) $(SOURCES) -o $(NAME)

.PHONY: clean
clean:

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)

.PHONY: re
re: fclean all
