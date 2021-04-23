##
## EPITECH PROJECT, 2020
## Day10
## File description:
## Makefile
##


CC	=	@ gcc -g -g2 -g3

SRC	=	$(wildcard *.c)

OBJ	= $(SRC:.c=.o)

LIB	=	libmy.a

INC = 	../include/sokoban.h

CFLAGS = -W -Wall -Wextra

all:	$(LIB)

$(LIB):	$(OBJ)
		@ ar rsc $(LIB) $(OBJ)
		@ echo "\033[1;36m[LIB COMPILED]\033[0m"

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(LIB)

re:	fclean all