NAME = megaphone

OBJDIR = obj

FILES = megaphone.cpp

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(patsubst %.cpp, $(OBJDIR)/%.o, $(FILES))

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
