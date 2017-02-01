##
## Makefile for  in /home/fourni_s/rendu/Lib_and_H
##
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
##
## Started on  Mon Oct 26 23:42:44 2015 sonny fournier
## Last update Fri Apr 22 21:47:55 2016 sonny fournier
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
CFLAGS  +=      -I. -lmy -L../my

NAME	=       libprintf.a

SRCS	+=	sources/my_printf.c\
		sources/flags/flags_1.c\
		sources/flags/flags_2.c\
		sources/functions/my_putnbr_base.c\
		sources/functions/my_putnbr_long.c\
		sources/functions/my_putnbr_double.c

OBJS    =       $(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)PRINTF$(DEFAULT)

$(NAME):        $(OBJS)
		@$(AR) $(NAME) $(OBJS) && \
		 $(ECHO) "  ▼" && \
                 $(ECHO) $(GREEN)  "[AR]" $(TEAL) $(NAME) $(DEFAULT) || \
                 $(ECHO) $(RED)  "[XX]" $(TEAL) $(NAME)
		@$(RANLIB) $(NAME)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)

fclean:         clean
		@$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re

