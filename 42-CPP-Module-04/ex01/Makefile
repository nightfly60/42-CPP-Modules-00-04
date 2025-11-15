NAME = Animal

OBJDIR = obj

FILES = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(patsubst %.cpp, $(OBJDIR)/%.o, $(FILES))

INCLUDES = Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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
