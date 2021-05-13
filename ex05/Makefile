NAME	=	a.out
COMPILER=	clang++
FLAGS	=	-Wall -Wextra -Werror
SRC		=	main.cpp Brain.cpp Human.cpp
INC		=	Brain.hpp Human.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(FLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
