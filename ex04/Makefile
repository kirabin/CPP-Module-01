NAME	=	a.out
COMPILER=	clang++
FLAGS	=	-Wall -Wextra -Werror
SRC		=	ex04.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	$(COMPILER) $(FLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f **/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
