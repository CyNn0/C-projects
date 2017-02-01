##
## Makefile for  in /home/fourni_s/UNIX/Presets
## 
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
## 
## Started on  Tue Feb 16 19:27:47 2016 sonny fournier
## Last update Sun May 22 22:32:31 2016 boris saint-bonnet
##

CC	=	gcc

RM	=	rm -f

ECHO	=       /bin/echo -e
DEFAULT	=       "\033[00m"
GREEN	=       "\033[0;32m"
TEAL	=       "\033[1;36m"
RED	=       "\033[0;31m"

CFLAGS	+=	-Wextra -Wall -Werror
CFLAGS	+=	-ansi -pedantic
CFLAGS	+=	-I./include
CFLAGS	+=	-lprintf -Llib/printf -lmy -Llib/my -llist -Llib/list

NAME 	=	generateur

SRCS	+=	sources/main.c			\
		sources/algo.c			\
		sources/directions.c		\
		sources/directions2.c		\
		sources/map_management.c

OBJS	=	$(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO) $(RED)COMPI$(DEFAULT)-$(TEAL)LATIOOON$(DEFAULT)
		@$(ECHO)

$(NAME):	$(OBJS)
		@$(MAKE) -C lib/my/ all
		@$(MAKE) -C lib/list/ all
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
		@$(MAKE) -C lib/list/ clean
		@$(MAKE) -C lib/printf/ clean

fclean: 	clean
		@$(RM) $(NAME)
		@$(ECHO) $(RED)FCLEAN$(DEFAULT)
		@$(MAKE) -C lib/my/ fclean
		@$(MAKE) -C lib/list/ fclean
		@$(MAKE) -C lib/printf/ fclean

re:		fclean all

.PHONY: 	all clean fclean re
