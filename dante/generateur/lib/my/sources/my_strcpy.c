/*
** my_strcpy.c for my_strcpy in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 06:11:36 2015 sonny fournier
** Last update Sat Apr 23 04:55:32 2016 sonny fournier
*/

#include "libmy.h"

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
