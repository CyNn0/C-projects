/*
** my.h for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 10:27:52 2016 sonny fournier
** Last update Sun May 29 21:18:36 2016 boris saint-bonnet
*/

#ifndef _MY_H_
# define _MY_H_

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

/*
**  STRUCTS
*/

typedef struct	s_ind
{
  int		x;
  int		y;
  int		ind;
}		t_ind;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

typedef struct	s_move
{
  int		x;
  int		y;
  struct s_move	*next;
}		t_move;

typedef struct	s_star
{
  int		x;
  int		y;
  int		cur_x;
  int		cur_y;
  int		end_x;
  int		end_y;
  int		*ind_list;
  int		*open_list;
  t_move	*move;
}		t_star;

typedef struct	s_read
{
  int		wid;
  int		len;
  char		*lab;
  t_pos		size;
  t_pos		pos;
  t_pos		end;
}		t_read;

/*
**  PROTOTYPES
*/

/*  ALGO  */

int		near(t_star *star);
t_move		*free_star(t_star *star);
int		final_path(t_star *star);
int		indice(t_star *star, int x, int y);
void		set_coef(t_star *star, int x, int y);
int		add_move(t_star *star, int x, int y);
t_ind		take_way(t_star *star, int x, int y);
void		add_next(t_star *star, int x, int y);
int		get_len(int xA, int xB, int yA, int yB);
t_move		*a_star(char *obj, t_pos *size, t_pos *pos, t_pos *end);
char		*strdup(char *src);

/*  MAP  */

int		init_tab(t_star *star);
int		cpy_map(char *str, t_read *laby);
void		free_case(char *obj, t_star *star);
int		check_map(char *s, t_read *lab);
int		init_star(t_star *star, t_pos *size, t_pos *pos, t_pos *end);

/*  UTILS  */

char		*read_inf(int fd);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_putchar(char c, int fd);
int		my_putstr(char *str, int fd);
int		get_map(char *path, t_read *lab);
char		*my_strcat(char *a, char *b, int fre);
char		*my_strcut(char *s, int beg, int nb, int end);

#endif /* _MY_H_ */
