#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/19 14:56:05 by eneto             #+#    #+#              #
#    Updated: 2016/09/20 17:25:00 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

LIB_NAME = bsq.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS = $(shell find srcs -type f -name "*.c")

OBJ = $(SRCS:.c=.o)

INC = includes/

all: lib main

main:
	@$(CC) $(FLAGS) main.c $(LIB_NAME) -o $(NAME)

lib: $(OBJ)
	@ar ruv $(LIB_NAME) $(OBJ)
	@ranlib $(LIB_NAME)

%.o: $(SRCS)%.c
	@$(CC) -I $(INC) $(FLAGS) -c $< -o $@

clean:
	@/bin/rm -f *.o *~ *# $(INC)*~ $(INC)*# srcs/*~ srcs/*# srcs/*.o

fclean: clean
	@/bin/rm -f $(NAME) $(LIB_NAME)

re: clean all 