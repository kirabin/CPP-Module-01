NAME = replace
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

RED = \033[31m
GREEN = \033[32m
ORANGE = \033[93m
NO_COLOR = \033[0m

all: $(NAME)

shout_assemble:
	@echo "$(GREEN)Assembling$(NO_COLOR)"

shout_clean:
	@echo "$(RED)Cleaning$(NO_COLOR)"

shout_test:
	@echo "$(ORANGE)Testing$(NO_COLOR)"

$(NAME): $(SRC)
	clang++ $(FLAGS) -o $(NAME) $(SRC)

clean: shout_clean
	rm -f $(OBJ)
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	./$(NAME) file 1 22

test_2:
	./$(NAME) file 11 2
