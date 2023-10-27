NAME		=	phonebook

CC			=	g++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

HEADER		=	PhoneBook.hpp Contact.hpp

D_HEADER	= ./

L_SRCS		=	PhoneBook.cpp Contact.cpp main.cpp

D_SRCS		=	./

L_OBJS		=	$(L_SRCS:.cpp=.o)

D_OBJS		=	./objs/

OBJS		=	$(addprefix $(D_OBJS), $(L_OBJS))

INCS		=	$(addprefix $(D_HEADER), $(L_HEADER))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(D_OBJS)%.o	:	$(D_SRCS)%.cpp $(INCS) Makefile
					mkdir -p $(D_OBJS)
					$(CC) $(FLAGS) -I$(D_HEADER) -c $< -o $@

clean	:
			$(RM) $(OBJS)
			$(RM) $(D_OBJS)

fclean	:
			$(MAKE) clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
