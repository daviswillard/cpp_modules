NAME		=	unnecessary_violence

SRCS		=	main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

VPATH		=	.

OBJ_DIR		:=	build_files
OBJS 		=	$(patsubst %,$(OBJ_DIR)/%,$(SRCS:.cpp=.o))
DEPS		=	$(OBJS:.o=.d)

CC			=	clang++
CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -I. -o $(NAME)

$(OBJ_DIR)/%.o:	%.cpp
				@$(CC) -I$. $(CPP_FLAGS) -c $< -o $@

$(OBJS):	|	$(OBJ_DIR)

$(OBJ_DIR):
			@mkdir $(OBJ_DIR)

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
-include	$(DEPS)
