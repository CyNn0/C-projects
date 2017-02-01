##
## Makefile for  in /home/fourni_s/rendu/Lib_and_H
##
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
##
## Started on  Mon Oct 26 23:42:44 2015 sonny fournier
## Last update Sat Apr 23 09:11:06 2016 sonny fournier
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

NAME	=       libperso.a

SRCS	+=	sources/my_strcut.c		\
		sources/my_strtok.c		\
		sources/my_puterror.c		\
		sources/xmalloc.c		\
		sources/GNL/get_next_line.c

OBJS    =       $(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)PERSO$(DEFAULT)

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

