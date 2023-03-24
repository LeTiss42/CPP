NAME = claptrap

GXX = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -pedantic -fsanitize=address

SRC =	main.cpp \
		ClapTrap.cpp \

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(GXX) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
