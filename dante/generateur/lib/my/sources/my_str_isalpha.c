/*
** my_str_isalpha.c for my_str_isalpha in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 08:47:08 2015 sonny fournier
** Last update Sat Feb 13 01:44:56 2016 sonny fournier
*/

#include "libmy.h"

int     my_str_isalpha(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) ||
	  str[i] == 32)
	j++;
      i++;
    }
  if (j == my_strlen(str))
    return (1);
  else
    return (-1);
}
