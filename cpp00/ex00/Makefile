NAME	=	megaphone

CC		=	g++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

L_SRCS	=	megaphone.cpp

D_SRCS	=	./

L_OBJS	=	$(L_SRCS:.cpp=.o)

D_OBJS	=	./objs/

OBJS	=	$(addprefix $(D_OBJS), $(L_OBJS))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(D_OBJS)%.o	:	$(D_SRCS)%.cpp Makefile
					mkdir -p $(D_OBJS)
					$(CC) $(FLAGS) -c $< -o $@

clean	:
			$(RM) $(OBJS)
			$(RM) $(D_OBJS)

fclean	:
			$(MAKE) clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
