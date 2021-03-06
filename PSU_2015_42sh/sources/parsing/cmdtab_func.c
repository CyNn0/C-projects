/*
** cmdtab_func.c for cmdtab_func in /home/gambin_l/Shared/42SH
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Sat May 21 09:23:49 2016 Lucas Gambini
** Last update Mon May 23 16:46:32 2016 Gambini Lucas
*/

#include "42.h"

void		free_tab(char **tab)
{
  int		i;

  i = -1;
  while (tab[++i])
    xfree(tab[i]);
  xfree(tab);
}

char		**clean_tab(char **tab)
{
  int		i;
  int		j;

  i = -1;
  while (tab[++i])
    {
      j = strlen(tab[i]);
      while (--j >= 0 && tab[i][j] == ' ')
	tab[i][j] = 0;
    }
  return (tab);
}

void	show_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i])
    printf("%s$\n", tab[i]);
}
