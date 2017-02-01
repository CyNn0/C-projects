/*
** my_revstr.c for my_revstr in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 06:42:51 2015 sonny fournier
** Last update Sat Feb 13 01:44:05 2016 sonny fournier
*/

#include "libmy.h"

char    *my_revstr(char *str)
{
  int   i;
  int   len;
  char  tmp;

  i = 0;
  len = my_strlen(str) - 1;
  while (i < len)
    {
      tmp = str[i];
      str[i++] = str[len];
      str[len--] = tmp;
    }
  return (str);
}
