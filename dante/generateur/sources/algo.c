/*
** algo.c for  in /home/fourni_s/UNIX/Work/IA/dante
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Wed Apr 27 23:49:57 2016 sonny fournier
** Last update Sun May 29 21:21:48 2016 boris saint-bonnet
*/

#include "my.h"

int     end(t_val *map)
{
  int   i;

  i = -1;
  while (map->map[++i] != -2)
    if (map->map[i] != (map->count - 1) && map->map[i] != -1)
      return (-1);
  return (0);
}

void    change(t_val *map, int i, int j)
{
  int   k;

  k = -1;
  while (map->map[++k] != -2)
    if (map->map[k] == i )
      map->map[k] = j;
}

void	exit_maze(t_val *map)
{
  map->map[(map->width * map->height) - 1] = (map->count - 1);
  map->map[map->width * map->height - 2] = (map->count - 1);
}

void	break_maze(t_val *map)
{
  int	i;
  int	j;
  int	l;

  i = -1;
  l = 0;
  while (map->map[++i] != -2)
    {
      if (i % map->width == 0)
	{
	  while (map->map[j = rand() % map->width] == -1);
	  map->map[j + (map->width - 1) * l] = map->count - 1;
	  l++;
	}
    }
}

void    algo(t_val *map)
{
  int   i;
  int   max;
  int   dir;

  i = 0;
  dir = 0;
  max = (map->width * map->height) - 1;
  while (end(map) == -1)
    {
      while ((map->map[i = (rand() % max)]) == -1);
      dir = rand() % 4;
      if (dir == 0)
	up(map, i);
      else if (dir == 1)
	down(map, i);
      else if (dir == 2)
	right (map, i);
      else if (dir == 3)
	left(map, i);
    }
  if (map->choice == 1)
    break_maze(map);
  exit_maze(map);
  print_map(map);
}
