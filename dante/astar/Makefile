##
## Makefile for  in /home/fourni_s/UNIX/Work/PSU/PSU_2015_42sh
## 
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
## 
## Started on  Sun May  1 00:24:26 2016 sonny fournier
## Last update Sun May 29 21:17:09 2016 boris saint-bonnet
##

CC	=	gcc

RM	=	rm -f

ECHO	=       /bin/echo -e
DEFAULT	=       "\033[00m"
GREEN	=       "\033[0;32m"
TEAL	=       "\033[1;36m"
RED	=       "\033[0;31m"

CFLAGS	+=	-Wextra -Wall
CFLAGS	+=	-ansi -pedantic -g -g3
CFLAGS	+=	-I./include

NAME 	=	solver

SRCS	+=	sources/main.c				\
		sources/utils.c				\
		sources/utils_2.c			\
		sources/algo.c				\
		sources/algo_utils.c			\
		sources/map.c				\
		sources/move.c				\

OBJS	=	$(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO) $(RED)COMPI$(DEFAULT)-$(TEAL)LATIOOON$(DEFAULT)
		@$(ECHO)

$(NAME):	$(OBJS)
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

fclean: 	clean
		@$(RM) $(NAME)
		@$(ECHO) $(RED)FCLEAN$(DEFAULT)

re:		fclean all

.PHONY: 	all clean fclean re
