/*
** my_strdup.c for  in /home/fourni_s/UNIX/myshrc
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 04:50:23 2016 sonny fournier
** Last update Sat Apr 23 04:53:44 2016 sonny fournier
*/

#include "libmy.h"

char	*my_strdup(char *s)
{
  int	len;
  char	*ret;

  len = my_strlen(s) + 1;
  if ((ret = malloc(sizeof(char) * len)) == NULL)
    return (NULL);
  my_strcpy(ret, s);
  return (ret);
}
