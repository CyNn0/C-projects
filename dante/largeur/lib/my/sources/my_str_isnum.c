/*
** my_str_isnum.c for my_str_isnum in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Dec  4 01:09:23 2015 sonny fournier
** Last update Mon Apr 25 04:10:33 2016 sonny fournier
*/

#include "libmy.h"

int     my_str_isnum(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  if (str[0] == '-')
    {
      i++;
      j++;
    }
  while (str[i])
    {
      if (str[i] >= 48 && str[i] <= 57)
	j++;
      i++;
    }
  if (j == my_strlen(str))
    return (1);
  else
    return (-1);
}
