##
## Makefile for  in /home/fourni_s/rendu/Lib_and_H
##
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
##
## Started on  Mon Oct 26 23:42:44 2015 sonny fournier
## Last update Sat Apr 23 08:57:18 2016 sonny fournier
##

CC      =       gcc

RM      =       rm -f

ECHO    =       /bin/echo -e
DEFAULT =       "\033[00m"
GREEN   =       "\033[0;32m"
TEAL    =       "\033[1;36m"
RED     =       "\033[0;31m"

AR      =       ar rc

RANLIB  =       ranlib

CFLAGS  +=      -Wextra -Wall -Werror
CFLAGS  +=      -ansi -pedantic
CFLAGS  +=      -I./include

NAME	=       libmy.a

SRCS	+=	sources/my_isneg.c		\
		sources/my_putstr.c		\
		sources/my_strlen.c		\
		sources/my_getnbr.c		\
		sources/my_strcmp.c		\
		sources/my_strstr.c		\
		sources/my_strcpy.c		\
		sources/my_strcat.c		\
		sources/my_strdup.c		\
		sources/my_revstr.c		\
		sources/my_strncmp.c		\
		sources/my_strncpy.c		\
		sources/my_put_nbr.c		\
		sources/my_putchar.c		\
		sources/my_power_rec.c		\
		sources/my_str_isnum.c		\
		sources/my_square_root.c	\
		sources/my_str_isalpha.c	\
		sources/my_str_to_wordtab.c	\
		sources/my_str_isprintable.c

OBJS    =       $(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)MY$(DEFAULT)

$(NAME):	$(OBJS)
		@$(AR) $(NAME) $(OBJS) && \
                 $(ECHO) "  ▼" && \
                 $(ECHO) $(GREEN)  "[AR]" $(TEAL) $(NAME) $(DEFAULT) || \
                 $(ECHO) $(RED)  "[XX]" $(TEAL) $(NAME)
		@$(RANLIB) $(NAME)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)

fclean: 	clean
		@$(RM) $(NAME)

re:     	fclean all

.PHONY: 	all clean fclean re

