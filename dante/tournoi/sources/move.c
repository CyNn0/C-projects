/*
** move.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 11:45:22 2016 sonny fournier
** Last update Sun May 22 22:03:02 2016 boris saint-bonnet
*/

#include "my.h"

void	add_next(t_star *star, int x, int y)
{
  int	i;
  int	j;
  int	tmp_x;
  int	tmp_y;

  i = -1;
  while (i < 2)
    {
      j = -1;
      while (j < 2)
	{
	  tmp_x = x + i;
	  tmp_y = y + j;
	  if (((j == 0 || i == 0)) && (tmp_x >= 0 && tmp_y >= 0
				       && tmp_x < star->x && tmp_y < star->y)
	      && star->ind_list[tmp_x + star->x * tmp_y] >= 0)
	    set_coef(star, tmp_x, tmp_y);
	  j++;
	}
      i++;
    }
}

int             near(t_star *star)
{
  int		i;
  int		j;
  int		len;

  len = -1;
  i = -1;
  while (++i < star->x)
    {
      j = 0;
      while (j < star->y)
	{
	  if ((star->open_list[i + star->x * j] <= len || len < 0)
	      && star->open_list[i + star->x * j] > 0)
	    {
	      len = star->open_list[i + star->x * j];
	      star->cur_x = i;
	      star->cur_y = j;
	    }
	  j++;
	}
    }
  star->open_list[star->cur_x + star->x * star->cur_y] = -1;
  return (len == -1 ? -1 : (star->ind_list[star->cur_x + star->x
					   * star->cur_y]
			    = indice(star, star->cur_x, star->cur_y) + 1));
}

t_ind	take_way(t_star *star, int x, int y)
{
  t_ind	ind;

  ind.ind = star->ind_list[x + star->x * y];
  ind.x = x;
  ind.y = y;
  return (ind);
}

int	final_path(t_star *star)
{
  int	i;
  int	j;
  int	tmp_x;
  int	tmp_y;
  t_ind	ind;

  ind = take_way(star, star->cur_x, star->cur_y);
  i = -1;
  while (i < 2)
    {
      j = -2;
      while (++j < 2)
	{
	  tmp_x = star->cur_x + i;
	  tmp_y = star->cur_y + j;
	  if (((j == 0 || i == 0)) && (tmp_x >= 0 && tmp_y >= 0
				       && tmp_x < star->x && tmp_y < star->y)
	      && (j != 0 || i != 0)
	      && star->ind_list[tmp_x + star->x * tmp_y] > 0
	      && ind.ind > star->ind_list[tmp_x + star->x * tmp_y])
	    ind = take_way(star, tmp_x, tmp_y);
	}
      i++;
    }
  return (add_move(star, (star->cur_x = ind.x), (star->cur_y = ind.y)));
}
