/*
** map.c for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:57:37 2016 sonny fournier
** Last update Sun May 22 22:34:18 2016 sonny fournier
*/

#include "my.h"

void    print_end(char **map, t_list *list)
{
  int   x;
  int   y;

  while (list->x != 0 || list->y != 0)
    {
      x = list->px;
      y = list->py;
      map[list->y][list->x] = 'o';
      if (list->prev != NULL)
	list = list->prev;
      while (x != list->x || y != list->y)
	list = list->prev;
    }
  map[list->y][list->x] = 'o';
}

char	**get_map(char *name, t_var *var)
{
  int	fd;
  char	*s;

  var->s = "\0";
  if ((fd = open(name, O_RDONLY)) == -1)
    return (NULL);
  while ((s = get_next_line(fd)))
    {
      s = my_strcat(s, "\n", 1);
      var->s = my_strcat(var->s, s, 0);
      free(s);
    }
  var->map = my_str_to_wordtab(var->s, '\n');
  free(var->s);
  return (var->map);
}
