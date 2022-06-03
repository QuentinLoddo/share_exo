##
## EPITECH PROJECT, 2020
## Makefile for every project
## File description:
## Makefile
##

SRC	=	src/main.c				\
		src/message.c			\
		src/check_error.c		\
		src/move_right_left.c	\
		src/move_up_down.c		\
		src/sokoban.c			\
		lib/my/my_putstr.c		\
		src/get_nb_line.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-Iinclude

CFLAGS	=	-W -Wall -Wextra

LDLIBS	=	-lncurses

NAME	=	my_sokoban

ALLFLAGS	=	$(CFLAGS)	$(CPPFLAGS)	$(LDLIBS)

CC	=	gcc

LD	=	$(CC)

$(LIB):
		make -C lib/

$(NAME):	$(OBJ)
			gcc -o $(NAME)	$(OBJ)	$(ALLFLAGS) -g

$(valg):	$(OBJ)
			gcc -o $(NAME)	$(OBJ)	$(ALLFLAGS)	-ggdb3

vclean:
	rm -f *~ *#*#* .#* vgcore.*
.PHONY: vclean

debug:
		$(valg)
.PHONY: debug

clean:
		$(RM) -fr src/*.o
		$(RM) -rf lib/my/*.o
.PHONY:	clean

fclean:		clean vclean
		$(RM) $(NAME)
.PHONY:	fclean

all:	$(LIB) $(NAME)
.PHONY:	all

re:		fclean all
.PHONY:	re
