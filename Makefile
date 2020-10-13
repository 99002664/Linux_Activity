.PHONY: clean build run
NAME = main

INC = -Iinclude

SRC = src/bit.c\
src/util.c\
src/string1.c\
src/main.c

build:
        gcc $(SRC) $(INC) -o $(NAME).out

run:
        ./$(NAME).out

clean:
        rm*.out
