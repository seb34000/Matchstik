##
## EPITECH PROJECT, 2020
## Day10
## File description:
## Makefile
##

CC	=	@ gcc -g -g2 -g3

SRC	=	$(wildcard src/*.c)

OBJ	= $(SRC:.c=.o)

CLIB	=	-L ./lib/ -lmy

NOM	=	matchstick

CFLAGs += -I ./include/
DBGFLAG += -W -Wall -Wextra

all:	$(NOM)

$(NOM):	comp $(OBJ)
	@ $(CC) $(OBJ) -o $(NOM) $(CLIB) $(CFLAGS) $(DBGFLAG)
	@ make clean
	@ echo "\033[1;36m[PROJECT COMPILED]\033[0m"

comp:
	@ make -C ./lib/

clean:
	@ $(RM) $(OBJ)
	@ make clean -C ./lib/

fclean: clean
	@ $(RM) $(NOM)
	@ rm -rf *.dSYM
	@ make fclean -C ./lib/
	@ echo "\033[1;32m[CLEAN OK]\033[0m"

re:	fclean all

r:	clean $(OBJ)
	@ $(CC)  $(OBJ) -o $(NOM) $(CLIB) $(CFLAGS)
	@ make clean
	@ echo "\033[1;32m[FAST MAKE OK]\033[0m"