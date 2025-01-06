##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## make units tests
##

SRC =	main.c	\
	neutrinos.c	\
	get_newvalue.c	\
	compute_loop.c	\
	display.c	\
	is_nbr.c	\
	args_parsing.c	\
	compute_function/add_mean.c	\
	compute_function/add_hmean.c	\
	compute_function/add_std_dev.c	\
	compute_function/find_rms.c	\
	compute_function/add_rms.c

NAME	=	104neutrinos

OBJ	=	$(SRC:.c=.o)

DEBUG_VALGRIND += -g3 -iquote ./include

CPPFLAGS += -iquote ./include

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lm

debug: fclean $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lm $(DEBUG_VALGRIND)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean  all

coding_style: fclean
	clear && ../../coding-style.sh .
	cat coding-style-reports.log
	@rm -f coding-style-reports.log
