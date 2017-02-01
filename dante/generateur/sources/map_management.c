/*
** map_management.c for  in /home/fourni_s/UNIX/Work/IA/dante
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Apr 28 00:26:48 2016 sonny fournier
** Last update Sun May 29 21:09:53 2016 sonny fournier
*/

#include "my.h"

void    print_map(t_val *map)
{
  int   i;
  int	fd;

  i = -1;
  if ((fd = open("map", O_WRONLY | O_CREAT |
		 O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
    exit(-1);
  while (map->map[++i] != -2)
    {
      if ((i % map->width) == 0 && i != 0)
	write(fd, "\n", 1);
      if (map->map[i] == -1)
	write(fd, "X", 1);
      else
	write(fd, "*", 1);
    }
  close(fd);
}

int     init_map(t_val *map)
{
  int   i;
  int   l;

  i = -1;
  l = 0;
  if ((map->map = malloc(sizeof(int) * (map->width * map->height)+10)) == NULL)
    exit (-1);
  while (++i < (map->width * map->height))
    {
      if ((i % map->width) == 0)
	l++;
      if ((i % 2) == 1)
	map->map[i] = -1;
      else if ((l % 2) == 1)
	map->map[i] = map->count++;
      if ((l % 2) == 0)
	map->map[i] = -1;
    }
  map->map[(map->width * map->height)] = -2;
  algo(map);
  return (0);
}

void    init_struct(int width, int height, char *choice)
{
  t_val map;

  map.choice = 1;
  if (choice == NULL)
    map.choice = 1;
  if (choice != NULL && my_strcmp(choice, "parfait") == 0)
    map.choice = 0;
  map.width = width;
  map.height = height;
  map.count = 1;
  init_map(&map);
  free(map.map);
}
