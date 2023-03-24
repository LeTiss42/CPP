NAME = phonebook

GXX = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -pedantic #-g -fsanitize=address

SRC =	main.cpp \
		PhoneBook.class.cpp \
		Contact.class.cpp

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
