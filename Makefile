##
## Makefile in /home/arnhol_m/rendu/perso/minitalk
## 
## Made by Arnholz Martin
## Login : arnhol_m
## 
## Started on  Mon Jan  4 10:49:16 2016 
## Last update Mon Jan  4 10:49:19 2016 
##

NAME1	= client/client

NAME2	= server/server

RM	= rm -rf

SRC1	=	client/main.c\
		client/my_getnbr.c\
		client/my_pid.c\
		client/my_putchar.c\
		client/my_putnbr_base.c\
		client/my_put_nbr.c\
		client/my_putstr.c\
		client/my_strlen.c

SRC2	=	server/my_getnbr.c\
		server/my_pid.c\
		server/my_putchar.c\
		server/my_putnbr_base.c\
		server/my_put_nbr.c\
		server/my_putstr.c\
		server/my_strlen.c\
		server/server.c

all:
	cc -o $(NAME2) $(SRC2)
	cc -o $(NAME1) $(SRC1)

clean:
	$(RM)$(NAME1)
	$(RM)$(NAME2)

test: ./test.sh

re : fclean all
