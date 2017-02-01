/*
** my_strcut.c for  in /home/fourni_s/UNIX/perso
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 00:27:16 2016 sonny fournier
** Last update Sat Apr 23 04:29:48 2016 sonny fournier
*/

#include "perso.h"

char    *my_strcut(char *s, int beg, int nb, int end)
{
  int   i;
  char  *ret;

  i = 0;
  if (nb != 0)
    {
      if ((ret = malloc(sizeof(char) * nb + 1)) == NULL)
	return (NULL);
      while ((s[beg + end]) != '\0' && i != nb)
	ret[i++] = s[beg++];
    }
  else
    {
      if ((ret = malloc(sizeof(char) * my_strlen(s) - beg + 1)) == NULL)
	return (NULL);
      while ((s[beg + end]) != '\0')
	ret[i++] = s[beg++];
    }
  ret[i] = '\0';
  return (ret);
}
