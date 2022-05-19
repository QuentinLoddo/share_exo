##
## EPITECH PROJECT, 2020
## Makefile for every project
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/check_errors.c	\
		src/fazz_bizz.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-Iinclude

CFLAGS	=	-W -Wall -Wextra

NAME	=	fazzbizz

ALLFLAGS	=	$(CFLAGS) $(CPPFLAGS) $(LDLIBS)

CC	=	gcc

LD	=	$(CC)

all:    $(LIB) $(NAME)
.PHONY:	all

$(NAME):	$(OBJ)
			gcc -o $(NAME)	$(OBJ)	$(ALLFLAGS)

$(DEBUG):	$(OBJ)
	gcc -o $(NAME)	$(OBJ)	$(ALLFLAGS)	-ggdb3

vclean:
	rm -f *~ *#*#* .#* vgcore.*
.PHONY: vclean

valg:
	$(cleanall)	$(DEBUG)	valgrind ./$(NAME)
.PHONY: valg

clean:
		$(RM) -fr src/*.o
		$(RM) -fr lib/my/*.o
		$(RM) -fr src/*~
		$(RM) -fr lib/my/#*#
		$(RM) -fr lib/my/*~
		$(RM) -fr *~
		$(RM) -fr src/#*#
		$(RM) -fr include/*~
.PHONY:	clean

fclean:		clean
		$(RM) $(NAME)
.PHONY:	fclean

re:		fclean all
.PHONY:	re

cleanall:	fclean vclean
.PHONY:	allclean
