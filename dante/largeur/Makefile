##
## Makefile for  in /home/fourni_s/UNIX/Work/PSU/PSU_2015_42sh
## 
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
## 
## Started on  Sun May  1 00:24:26 2016 sonny fournier
## Last update Sun May 22 22:13:27 2016 sonny fournier
##

CC	=	gcc

RM	=	rm -f

ECHO	=       /bin/echo -e
DEFAULT	=       "\033[00m"
GREEN	=       "\033[0;32m"
TEAL	=       "\033[1;36m"
RED	=       "\033[0;31m"

CFLAGS	+=	-Wextra -Wall
CFLAGS	+=	-ansi -pedantic -g3 -g
CFLAGS	+=	-I./include
CFLAGS	+=	-Llib/my -Llib/printf
CFLAGS	+=	-lprintf -lmy

NAME 	=	solver

SRCS	+=	sources/main.c		\
		sources/algo.c		\
		sources/gnl.c		\
		sources/map.c		\
		sources/list.c		\
		sources/utils.c		\

OBJS	=	$(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO) $(RED)COMPI$(DEFAULT)-$(TEAL)LATIOOON$(DEFAULT)
		@$(ECHO)

$(NAME):	$(OBJS)
		@$(MAKE) -C lib/my/ all
		@$(MAKE) -C lib/printf/ all
		@$(CC) -g $(OBJS) -o $(NAME) $(CFLAGS) && \
		$(ECHO) && \
                 $(ECHO) $(GREEN)"[EX]" $(TEAL) $(NAME) $(DEFAULT) || \
                 $(ECHO) $(RED)"[XX]" $(TEAL) $(NAME) $(DEFAULT)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@ && \
                 $(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) || \
                 $(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

clean:
		@$(RM) $(OBJS)
		@$(ECHO) $(RED)CLEAN$(DEFAULT)
		@$(MAKE) -C lib/my/ clean
		@$(MAKE) -C lib/printf/ clean

fclean: 	clean
		@$(RM) $(NAME)
		@$(ECHO) $(RED)FCLEAN$(DEFAULT)
		@$(MAKE) -C lib/my/ fclean
		@$(MAKE) -C lib/printf/ fclean

re:		fclean all

.PHONY: 	all clean fclean re
