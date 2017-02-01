/*
** my_strstr.c for my_strstr in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 06:59:49 2015 sonny fournier
** Last update Sat Feb 13 01:46:22 2016 sonny fournier
*/

#include "libmy.h"

int	my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i])
    {
      while (str[i] != to_find[j] && str[i] != '\0')
	i++;
      if (str[i] == to_find[j])
	{
	  while (str[i + j] == to_find[j] && to_find[j] != '\0')
	    j++;
	  if (j == my_strlen(to_find))
	    return (1);
	  else if (j != my_strlen(to_find))
	    return (0);
	}
    }
  return (0);
}
