/*
** main.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 10:31:00 2016 sonny fournier
** Last update Sun May 22 21:04:47 2016 sonny fournier
*/

#include "my.h"

int	check_map(char *s, t_read *lab)
{
  int		i;
  int		test;

  lab->size.x = 0;
  while (s[lab->size.x] && s[lab->size.x] != '\n')
    lab->size.x = lab->size.x + 1;
  i = lab->size.x;
  lab->size.y = 0;
  while (s[i])
    {
      if (s[i] == '\n')
	i++;
      lab->size.y = lab->size.y + 1;
      test = 0;
      while (s[i] && s[i] != '\n' && (s[i] == 'X' || s[i] == '*'))
	{
	  i++;
	  test++;
	}
      if (test != lab->size.x && (test != 0  && s[i]))
	return (0);
    }
  return (cpy_map(s, lab));
}

void	get_hei(char *s, t_read *lab)
{
  int	i;

  i = -1;
  while (s[++i]);
  lab->len = (i - lab->wid);
}

int	cpy_map(char *s, t_read *lab)
{
  int	i;
  int	j;

  i = -1;
  j = 0;
  if ((lab->lab = malloc(lab->size.x * lab->size.y + 1)) == NULL)
    return (0);
  while (s[++i])
    if (s[i] == '\n')
      {
	lab->wid = i;
	break;
      }
  get_hei(s, lab);
  i = 0;
  while (s[i])
    {
      if (s[i] == '\n')
	i++;
      else
	lab->lab[j++] = s[i++];
    }
  return (1);
}

int	map_to_tab(t_read read, t_move *move)
{
  int	i;
  int	j;
  char	**map;

  i = 0;
  j = 0;
  if ((map = malloc(sizeof(char *) * read.len)) == NULL)
    return (-1);
  while (j != (read.len / read.wid))
    {
      map[j] = strdup(my_strcut(read.lab, (j * read.wid), (read.wid), 0));
      j++;
    }
  while (move != NULL)
    {
      map[move->x][move->y] = 'o';
      move = move->next;
    }
  while (i != (read.len / read.wid))
    printf("%s\n", map[i++]);
  return (0);
}

int	main(int ac, char **av)
{
  t_read        read;
  t_move	*move;

  if (ac != 2)
    return (my_putstr("Use: ./astar map\n", 2));
  else if (get_map(av[1], &read) == 0)
    return (0);
  read.pos.x = 0;
  read.pos.y = 0;
  read.end.x = read.size.x - 1;
  read.end.y = read.size.y - 1;
  move = a_star(read.lab, &read.size, &read.pos, &read.end);
  map_to_tab(read, move);
  free(read.lab);
  return (1);
}
