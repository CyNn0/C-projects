##
## Makefile for  in /home/fourni_s/UNIX/Presets/lib/list
## 
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
## 
## Started on  Sat Apr 23 03:57:39 2016 sonny fournier
## Last update Sat Apr 23 08:58:38 2016 sonny fournier
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

CFLAGS  +=      -Wextra -Wall
CFLAGS  +=      -ansi -pedantic
CFLAGS  +=      -I./include

NAME	=       liblist.a

SRCS	+=	sources/add_beg.c		\
		sources/add_end.c		\
		sources/add_at_pos.c		\
		sources/list_len.c		\
		sources/rev_list.c		\
		sources/print_list.c		\
		sources/create_list.c		\
		sources/create_node.c		\
		sources/del_list.c		\
		sources/del_by_pos.c		\
		sources/del_all_by_data.c	\
		sources/del_first_by_data.c	\
		sources/search_all_by_data.c	\
		sources/search_first_by_data.c	\
		sources/fill_data.c

OBJS    =       $(SRCS:.c=.o)

all:		title $(NAME)

title:
		@$(ECHO)
		@$(ECHO) $(RED) LIB$(DEFAULT)-$(TEAL)LIST$(DEFAULT)

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

fclean: clean
	@$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
