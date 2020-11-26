##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(wildcard sources/*.c)

SRC_TEST=	truc.c \
			tests/test_truc.c

CFLAGS	=	-W -Werror -Wall -Wextra -g

LFLAGS	= 	-L lib/ -lmy

CSFMLFLAGS	= -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

CRIFLAGS =	-l criterion --coverage

IFLAGS = 	-I include/

NAME_TEST =	units_tests

NAME	=	my_hunter

all:
	cp include/struct.h lib/my/
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS) $(CSFMLFLAGS)

tests_run:
	make -C lib/my all
	gcc -o $(NAME_TEST) $(SRC_TEST) $(IFLAGS) $(LFLAGS) $(CFLAGS) $(CRIFLAGS) $(CSFMLFLAGS)
	./$(NAME_TEST)

clean:
	make -C lib/my clean
	rm -f *~
	rm -f tests/*~
	rm -f *gc*
	rm -f *~
fclean:
	make -C lib/my fclean
	rm lib/my/struct.h
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re:     fclean all
	make -C lib/my re
