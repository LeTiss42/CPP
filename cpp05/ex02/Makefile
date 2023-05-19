NAME = aanimal

GXX = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -pedantic #-fsanitize=address

SRC =	main.cpp \
		AAnimal.cpp \
		WrongAAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		Brain.cpp \

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
