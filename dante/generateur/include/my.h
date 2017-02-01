/*
** my.h for my in /home/fourni_s/rendu/Lib_and_H
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 04:14:15 2015 sonny fournier
** Last update Sun May 22 23:02:49 2016 sonny fournier
*/

#ifndef MY_H_
# define MY_H_

/*
**  INCLUDES
*/

#include <time.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../lib/my/include/libmy.h"
#include "../lib/list/include/list.h"
#include "../lib/printf/sources/include/printf.h"

/*
**  STRUCTS
*/

typedef struct	s_val
{
  int		*map;
  int		width;
  int		height;
  int		count;
  int		choice;
}		t_val;

/*
**  PROTOTYPES
*/

/*  PERFECT_MAZE  */

void		algo(t_val *map);
int		init_map(t_val *map);
void		print_map(t_val *map);
void		up(t_val *map, int i);
void		down(t_val *map, int i);
void		left(t_val *map, int i);
void		right(t_val *map, int i);
void		change(t_val *map, int i, int j);
void		up_it(t_val *map, int i, int y, int x);
void		down_it(t_val *map, int i, int y, int x);
void		left_it(t_val *map, int i, int y, int x);
void		right_it(t_val *map, int i, int y, int x);
void		init_struct(int width, int height, char *choice);

#endif /* !MY_H_ */
