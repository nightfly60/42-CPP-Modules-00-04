NAME = PhoneBook

OBJDIR = obj

FILES = Contact.cpp PhoneBook.cpp main.cpp

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(patsubst %.cpp, $(OBJDIR)/%.o, $(FILES))

INCLUDES = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	$(CPP) $(FLAGS) -o $@ $(OBJ)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
