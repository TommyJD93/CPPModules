NAME = Account

CC = c++

FLAGS = -Wall -Wextra -Werror

FILES = Account.cpp tests.cpp \

OBJ=$(FILES:.cpp=.o)

HEADER = Account.hpp

%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
