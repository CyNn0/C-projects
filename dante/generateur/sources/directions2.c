/*
** directions2.c for  in /home/xx/Rendu/IA/dante/imperfect_maze
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun May 22 21:39:09 2016 boris saint-bonnet
** Last update Sun May 22 21:55:36 2016 boris saint-bonnet
*/

#include "my.h"

void	up_it(t_val *map, int i, int y, int x)
{
  map->map[map->width * (y - 2) + x] = map->map[i];
  map->map[map->width * (y - 1) + x] = map->map[i];
}

void	down_it(t_val *map, int i, int y, int x)
{
  map->map[map->width * (y + 2) + x] = map->map[i];
  map->map[map->width * (y + 1) + x] = map->map[i];
}

void	left_it(t_val *map, int i, int y, int x)
{
  map->map[map->width * y + (x - 2)] = map->map[i];
  map->map[map->width * y + (x - 1)] = map->map[i];
}

void	right_it(t_val *map, int i, int y, int x)
{
  map->map[map->width * y + (x + 2)] = map->map[i];
  map->map[map->width * y + (x + 1)] = map->map[i];
}
