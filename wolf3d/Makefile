##
## Makefile for Makefile in /home/jeremy.elkaim/wolf3d
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Tue Dec 20 15:25:06 2016 jeremy elkaim
## Last update Fri Jan 13 10:46:37 2017 jeremy elkaim
##

NAME    = wolf3d

INC	= -Iinclude -lc_graph_prog

CFLAGS += -Wextra -Wall

SRC    = source/my_put_pixel.c	\
	 source/draw_line.c	\
	 source/wolf3d.c	\

OBJ    = $(SRC:.c=.o)

all:	 $(NAME)

$(NAME): $(OBJ)
	 gcc $(OBJ) -o $(NAME) $(INC) $(CFLAGS)

clean:
	 rm -rf $(OBJ)

fclean:	 clean
	 rm -rf $(NAME)

re:	 fclean all

.PHONY:	 all clean fclean re
