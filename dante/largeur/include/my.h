/*
** my.h for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:19:43 2016 sonny fournier
** Last update Sun May 22 22:30:22 2016 sonny fournier
*/

#ifndef _MY_H_
# define _MY_H_

#ifndef READ_SIZE
# define READ_SIZE 14
#endif /* !READ_SIZE */

/*
**  INCLUDES
*/

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../lib/my/include/libmy.h"
#include "../lib/printf/include/printf.h"

/*
**  STRUCTS
*/

typedef struct	s_var
{
  char		*s;
  char		**map;
}		t_var;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

typedef struct s_list
{
  int           x;
  int           y;
  int           px;
  int           py;
  int           first;
  struct s_list *next;
  struct s_list *prev;
}               t_list;

/*
**  PROTOTYPES
*/

/*  ALGO  */

void		algo(t_var *var);
t_list		*get_path(char **map, t_pos pos, t_list *list);

/*  MAP  */

char		**get_map(char *name, t_var *var);
void		print_end(char **map, t_list *list);

/*  LIST  */

void		del_list(t_list *list);
int		inside_list(t_list *list, int x, int y);
t_list		*add_end(t_list *list, int x, int y, int px, int py);

/*  UTILS  */

int		get_len(char **map);
void		print_map(char **map);
void		my_free_tab(char **tab);
char		*get_next_line(const int fd);

#endif /* _MY_H_ */
