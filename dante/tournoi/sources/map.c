/*
** map.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 11:13:47 2016 sonny fournier
** Last update Sun May 22 22:03:33 2016 boris saint-bonnet
*/

#include "my.h"

int	init_tab(t_star *star)
{
  int	i;
  int	max;

  max = star->x * star->y;
  if ((star->ind_list = malloc(sizeof(int) * max)) == NULL ||
      (star->open_list = malloc(sizeof(int) * max)) == NULL)
    return (-1);
  i = 0;
  while (i < max)
    {
      star->ind_list[i] = 0;
      star->open_list[i] = 0;
      i++;
    }
  return (0);
}

void	free_case(char *obj, t_star *star)
{
  int	i;
  int	max;

  max = star->x * star->y;
  i = 0;
  while (i < max)
    {
      if (obj[i] != '*')
	{
	  star->ind_list[i] = -1;
	  star->open_list[i] = -1;
	}
      i++;
    }
}

int	init_star(t_star *star, t_pos *size, t_pos *pos, t_pos *end)
{
  star->x = size->x;
  star->y = size->y;
  if (size->x < 1 || size->y < 1)
    return (-1);
  star->cur_x = pos->x;
  star->cur_y = pos->y;
  if (pos->x < 0 || pos->y < 0 || pos->x >= size->x || pos->y >= size->y)
    return (-1);
  star->end_x = end->x;
  star->end_y = end->y;
  if (end->x < 0 || end->y < 0 || end->x >= size->x || end->y >= size->y)
    return (-1);
  star->move = NULL;
  return (0);
}
