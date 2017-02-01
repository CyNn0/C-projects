/*
** algo.c for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:59:37 2016 sonny fournier
** Last update Sun May 29 21:20:44 2016 boris saint-bonnet
*/

#include "my.h"

void	get_path_2(char **map, t_pos pos, t_list *list)
{
  if (list->y != (pos.y - 1))
    {
      if (map[list->y + 1][list->x] != 'X' &&
	  map[list->y + 1][list->x] != '\0'&&
	  inside_list(list, list->x, list->y + 1) == 0  &&
	  list->y + 1 != pos.y)
	add_end(list, list->x, list->y + 1, list->x, list->y);
      if (list->y != 0 && map[list->y - 1][list->x] != 'X' &&
	  map[list->y - 1][list->x] != '\0'&&
	  inside_list(list, list->x, list->y - 1) == 0)
	add_end(list, list->x, list->y - 1, list->x, list->y);
    }
}

t_list	*get_path(char **map, t_pos pos, t_list *list)
{
  while (list->x != (pos.x - 1) || list->y != (pos.y - 1))
    {
      if (list->x != (pos.x - 1))
	{
	  if (map[list->y][list->x + 1] != '\0' &&
	      map[list->y][list->x + 1] != 'X' &&
	      inside_list(list, list->x + 1, list->y) == 0 &&
	      list->x + 1 != pos.x)
	    add_end(list, list->x + 1, list->y, list->x, list->y);
	  if (list->x != 0 && map[list->y][list->x - 1] != 'X' &&
	      map[list->y][list->x - 1] != '\0' &&
	      inside_list(list, list->x - 1, list->y) == 0)
	    add_end(list, list->x - 1, list->y, list->x, list->y);
	}
      get_path_2(map, pos, list);
      list = list->next;
    }
  return (list);
}

void	algo(t_var *var)
{
  t_pos		pos;
  t_list        *list;

  list = NULL;
  pos.y = get_len(var->map);
  pos.x = my_strlen(var->map[0]);
  list = add_end(list, 0, 0, 0, 0);
  list = get_path(var->map, pos, list);
  print_end(var->map, list);
  print_map(var->map);
  del_list(list);
}
