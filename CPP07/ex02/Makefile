NAME = iter

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp array.cpp\

OBJ=$(FILES:.cpp=.o)

HEADER = array.hpp

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
