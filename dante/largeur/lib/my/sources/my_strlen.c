/*
** my_strlen.c for  in /home/fourni_s/UNIX/myshrc/lib/my
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 08:47:39 2016 sonny fournier
** Last update Thu Apr 28 06:52:49 2016 sonny fournier
*/

#include "libmy.h"

int	my_strlen(char *s)
{
  int	i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}
