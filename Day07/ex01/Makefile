NAME = iter

SRC = iter.cpp

OBJ = $(SRC.c=.o)

CC = clang++

FLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) $(SRC) -o $(NAME) 

clean:
	@rm -rf *.o

fclean: clean
		@rm -rf $(NAME)

re:	fclean all