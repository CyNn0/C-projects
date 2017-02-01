/*
** my_str_to_wordtab2.c for  in /home/fourni_s/UNIX/Work/PSU/PSU_2015_minishell2
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr  9 17:25:47 2016 sonny fournier
** Last update Sun May 22 21:44:52 2016 sonny fournier
*/

#include "libmy.h"

int	my_count(char *str, char c)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      while (str[i] && (str[i] == c || str[i] == '\t'))
	i++;
      if (str[i])
	count++;
      if (str[i] != '\0')
	i++;
    }
  return (count);
}

int	lentab(const char *str, char c)
{
  int	i;

  i = -1;
  while (str[++i] != '\0' && str[i] != c && str[i] != '\t');
  return (i);
}

char	**my_str_to_wordtab(char *str, char c)
{
  char	**tab;
  int	i;
  int	z;
  int	j;

  i = 0;
  z = -1;
  if ((tab = malloc((my_count(str, c) + 1) * sizeof(*tab))) == NULL)
    return (NULL);
  while (str[i])
    {
      j = 0;
      while (str[i] && (str[i] == c || str[i] == ' ' || str[i] == '\t'))
	++i;
      if ((tab[++z] = malloc((lentab(&str[i], c) + 1)
			     * sizeof(**tab))) == NULL)
	return (NULL);
      while (str[i] && str[i] != c && str[i] != ' ' && str[i] != '\t')
	tab[z][j++] = str[i++];
      tab[z][j] = '\0';
      while (str[i] && (str[i] == c || str[i] == ' ' || str[i] == '\t'))
	++i;
    }
  tab[z + 1] = '\0';
  return (tab);
}
