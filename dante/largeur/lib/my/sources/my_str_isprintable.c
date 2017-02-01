/*
** my_str_isprintable.c for my_str_isprintable in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri Dec  4 01:34:00 2015 sonny fournier
** Last update Sat Feb 13 01:45:27 2016 sonny fournier
*/

#include "libmy.h"

int     my_str_isprintable(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
	j++;
      i++;
    }
  if (j == my_strlen(str))
    return (1);
  else
    return (-1);
}
