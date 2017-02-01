/*
** my_strncmp.c for my_strncmp in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 08:36:15 2015 sonny fournier
** Last update Mon May  9 09:01:04 2016 sonny fournier
*/

#include "libmy.h"

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (i != n)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (s1[i] - s2[i]);
}
