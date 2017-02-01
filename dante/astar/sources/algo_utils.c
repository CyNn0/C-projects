/*
** algo_utils.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 11:01:15 2016 sonny fournier
** Last update Sun May 22 11:58:21 2016 sonny fournier
*/

#include "my.h"

int	get_len(int xA, int xB, int yA, int yB)
{
  int	ac_len;
  int	bc_len;
  int	full_len;

  ac_len = (xB - xA) < 0 ? -(xB - xA) : (xB - xA);
  bc_len = (yA - yB) < 0 ? -(yA - yB) : (yA - yB);
  full_len = ac_len + bc_len + 1;
  return (full_len);
}

int	indice(t_star *star, int x, int y)
{
  int	i;
  int	j;
  int	ind;
  int	tmp_x;
  int	tmp_y;

  i = -1;
  ind = 0;
  while (i < 2)
    {
      j = -1;
      while (j < 2)
	{
	  tmp_x = x + i;
	  tmp_y = y + j;
	  if (((j == 0 || i == 0)) && (tmp_x >= 0 && tmp_y >= 0 &&
				       tmp_x < star->x && tmp_y < star->y) &&
	      star->ind_list[tmp_x + star->x * tmp_y] > 0 &&
	      (ind > star->ind_list[tmp_x + star->x * tmp_y] || ind == 0))
	    ind = star->ind_list[tmp_x + star->x * tmp_y];
	  j++;
	}
      i++;
    }
  return (ind);
}

void	set_coef(t_star *star, int x, int y)
{
  int	coef;

  if (star->open_list[x + star->x * y] != -1)
    {
      coef = get_len(x, star->end_x, y, star->end_y) * 10;
      coef += indice(star, x, y) + 1;
      star->open_list[x + star->x * y] = coef;
    }
}

int     add_move(t_star *star, int x, int y)
{
  t_move        *move;

  if ((move = malloc(sizeof(t_move))) == NULL)
    return (-1);
  move->next = star->move;
  move->x = x;
  move->y = y;
  star->move = move;
  return (1);
}
