/*
** algo.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 10:59:55 2016 sonny fournier
** Last update Sun May 22 22:03:15 2016 boris saint-bonnet
*/

#include "my.h"

t_move	*free_star(t_star *star)
{
  free(star->ind_list);
  free(star->open_list);
  return (star->move);
}

t_move		*a_star(char *obj, t_pos *size, t_pos *pos, t_pos *end)
{
  t_star	star;
  int           cont;

  if (init_star(&star, size, pos, end) == -1)
    return (NULL);
  cont = 1;
  if (init_tab(&star) == -1)
    return (NULL);
  free_case(obj, &star);
  star.open_list[pos->x + size->x * pos->y] = -1;
  star.ind_list[pos->x + size->x * pos->y] = 1;
  while ((star.cur_x != star.end_x || star.cur_y != star.end_y) && cont != -1)
    {
      add_next(&star, star.cur_x, star.cur_y);
      cont = near(&star);
    }
  if ((star.cur_x != star.end_x || star.cur_y != star.end_y)
      || add_move(&star, star.cur_x, star.cur_y) == -1)
    return (NULL);
  while (star.cur_x != pos->x || star.cur_y != pos->y)
    {
      if (final_path(&star) == -1)
	return (NULL);
    }
  return (free_star(&star));
}
