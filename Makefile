##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

TEST_SRC =\
		strlen.c	\
		strchr.c	\
		strcmp.c	\
		strncmp.c	\
		memset.c	\
		memcpy.c	\

SRC    =\
		strlen.asm	\
		strchr.asm	\
		strcmp.asm	\
		strncmp.asm	\
		memset.asm	\
		memcpy.asm	\

COMMON_SRC =\
		$(addprefix src/, $(SRC))

UT_SRC =\
		$(addprefix test_src/, $(TEST_SRC))

UT_OBJ =\
		$(UT_SRC:.c=.o)

NAME = libasm.so

CFLAGS =  -W -Wextra -g3 -fno-builtin -ldl

LD = ld

CC = gcc

OBJ = $(COMMON_SRC:.asm=.o)

UNIT_TEST = test

all: $(OBJ)
	$(LD) -shared -o $(NAME) $(OBJ)

tests_run: LDFLAGS += -lcriterion
tests_run: CFLAGS += --coverage
tests_run:  re $(UT_OBJ)
	$(CC) $(UT_OBJ) $(CFLAGS) $(LDFLAGS)
	./a.out

%.o: %.asm
		nasm -f elf64 $< -o $@

clean:
	rm -f test_src/*.gcda
	rm -f test_src/*.gcno
	rm -f test_src/*.o
	rm -f $(OBJ)
	rm -f $(TEST_OBJ)

fclean:    clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re: fclean all

.PHONY: re clean fclean all test