NAME = materia

GXX = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -pedantic -fsanitize=address

SRC =	main.cpp \
		AMateria.cpp\
		Ice.cpp \
		Cure.cpp \
		Character.cpp \

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
