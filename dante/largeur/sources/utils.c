/*
** utils.c for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:53:19 2016 sonny fournier
** Last update Sun May 22 22:29:35 2016 sonny fournier
*/

#include "my.h"

void    my_free_tab(char **tab)
{
  int   i;

  i = 0;
  if (tab != NULL)
    {
      while (tab[i] != NULL)
	free(tab[i++]);
      free(tab);
    }
}

void	print_map(char **map)
{
  int	i;

  i = -1;
  while (map[++i])
    my_printf("%s\n", map[i]);
}

int	get_len(char **map)
{
  int	i;

  i = -1;
  while (map[++i]);
  return (i);
}
