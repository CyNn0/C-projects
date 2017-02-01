/*
** my_strcat.c for my_strcat in /home/fourni_s/rendu/PSU_2015_my_popup/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Tue Dec  8 20:36:20 2015 sonny fournier
** Last update Sat Feb 13 01:44:22 2016 sonny fournier
*/

#include "libmy.h"

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}

