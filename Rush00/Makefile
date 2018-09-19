CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra
CXXXFLAGS = -Wall -Werror -Wextra -lncurses
NAME = ft_retro

SRC = srcs/player.cpp \
	  srcs/enemy.cpp \
	  srcs/map.cpp \
	  srcs/main.cpp

HEADERS = includes/player.hpp \
		  includes/enemy.hpp \
		  includes/map.hpp \


all: $(NAME)

$(NAME): $(SRC)
	clang++ -o ft_retro srcs/*.cpp -Wall -Werror -Wextra -lncurses

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
