/*
** directions.c for  in /home/fourni_s/UNIX/Work/IA/dante
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Wed Apr 27 23:36:14 2016 sonny fournier
** Last update Sun May 22 21:52:38 2016 boris saint-bonnet
*/

#include "my.h"

int	init_var(t_val *map, int i, int *x, int *y)
{
  *x = i % map->width;
  *y = i / map->width;
  return (0);
}

void	up(t_val *map, int i)
{
  int   x;
  int   y;
  int   bak;

  bak = init_var(map, i, &x, &y);
  if (y < 2)
    return;
  if (map->map[map->width * (y - 2) + x] != 0 &&
      map->map[map->width * (y - 2) + x] != map->map[i] &&
      map->map[map->width * (y - 2) + x] != -1)
    {
      if (map->map[i] > map->map[map->width * (y - 2) + x])
  	{
  	  bak = map->map[i];
  	  map->map[i] = map->map[map->width * (y - 2) + x];
  	  map->map[map->width * (y-1) + x] = map->map[map->width * (y-2) + x];
  	  change(map, map->map[map->width * (y - 2) + x], bak);
  	}
      else
  	{
  	  bak = map->map[map->width * (y - 2) + x];
  	  up_it(map, i, y, x);
  	  change(map, map->map[i], bak);
  	}
    }
}

void	down(t_val *map, int i)
{
  int   x;
  int   y;
  int   bak;

  bak = init_var(map, i, &x, &y);
  if (y >= (map->height - 2))
    return;
  if (map->map[map->width * (y + 2) + x] != 0 &&
      map->map[map->width * (y + 2) + x] != map->map[i] &&
      map->map[map->width * (y + 2) + x] != -1)
    {
      if (map->map[i] > map->map[map->width * (y + 2) + x])
	{
	  bak = map->map[i];
	  map->map[i] = map->map[map->width * (y + 2) + x];
	  map->map[map->width * (y+1) + x] = map->map[map->width * (y+2) + x];
	  change(map, map->map[map->width * (y + 2) + x], bak);
	}
      else
	{
	  bak = map->map[map->width * (y + 2) + x];
	  down_it(map, i, y, x);
	  change(map, map->map[i], bak);
	}
    }
}

void	right(t_val *map, int i)
{
  int   x;
  int   y;
  int   bak;

  bak = init_var(map, i, &x, &y);
  if (x >= (map->width - 2))
    return;
  if (map->map[map->width * y + (x + 2)] != 0 &&
      map->map[map->width * y + (x + 2)] != map->map[i] &&
      map->map[map->width * y + (x + 2)] != -1)
    {
      if (map->map[i] > map->map[map->width * y + (x + 2)])
	{
	  bak = map->map[i];
	  map->map[i] = map->map[map->width * y + (x + 2)];
	  map->map[map->width * y + (x+1)] = map->map[map->width * y + (x+2)];
	  change(map, map->map[map->width * y + (x + 2)], bak);
	}
      else
	{
	  bak = map->map[map->width * y + (x + 2)];
	  right_it(map, i, y, x);
	  change(map, map->map[i], bak);
	}
    }
}

void	left(t_val *map, int i)
{
  int   x;
  int   y;
  int   bak;

  bak = init_var(map, i, &x, &y);
  if (x < 2)
    return;
  if (map->map[map->width * y + (x - 2)] != 0 &&
      map->map[map->width * y + (x - 2)] != map->map[i] &&
      map->map[map->width * y + (x - 2)] != -1)
    {
      if (map->map[i] > map->map[map->width * y + (x - 2)])
	{
	  bak = map->map[i];
	  map->map[i] = map->map[map->width * y + (x - 2)];
	  map->map[map->width * y + (x-1)] = map->map[map->width * y + (x-2)];
	  change(map, map->map[map->width * y + (x - 2)], bak);
	}
      else
	{
	  bak = map->map[map->width * y + (x - 2)];
	  left_it(map, i, y, x);
	  change(map, map->map[i], bak);
	}
    }
}
