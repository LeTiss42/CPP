NAME = megaphone

GXX = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra #-g -fsanitize=address

SRC =	megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(GXX) $(CFLAGS) $^ -o $@

%.o : %.c
	$(GXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
