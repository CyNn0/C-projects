/*
** my_strncpy.c for my_strncpy in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 06:20:56 2015 sonny fournier
** Last update Sat Feb 13 01:46:12 2016 sonny fournier
*/

#include "libmy.h"

char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  if (my_strlen(src) > n)
    {
      dest[i] = '\0';
      return (dest);
    }
  else
    return (dest);
}
