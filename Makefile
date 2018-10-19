##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## File compile
##

CC	=	gcc -g3 -Wall -Werror

RM	=	rm -rf

NAME	=	my_hunter

LFLAGS	=	-lcsfml-audio -lcsfml-graphics -lcsfml-window -lcsfml-system

SRCS	=	./src/main.c		\
		./src/gere_display_game.c	\
		./src/display_menu.c	\
		./src/init_game.c	\
		./src/init_game2.c	\
		./src/loop.c		\
		./src/loop_game.c	\
		./src/my_data.c		\
		./src/my_event.c	\
		./src/my_destroy.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
