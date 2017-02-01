/*
** my_memset.c for  in /home/fourni_s/UNIX/Work/PSU/PSU_2015_42sh
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Fri May 20 04:36:59 2016 sonny fournier
** Last update Fri May 20 04:37:13 2016 sonny fournier
*/

#include "libmy.h"

void    *my_memset(char *s, int value, int size)
{
  int   i;

  i = 0;
  while (s && i < size)
    s[i++] = value;
  return (s);
}
