/*
** xmalloc.c for  in /home/fourni_s/UNIX/myshrc/lib/perso/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 09:10:28 2016 sonny fournier
** Last update Sat Apr 23 09:10:41 2016 sonny fournier
*/

#include "perso.h"

void    *xmalloc(int size)
{
  void  *ptr;

  if ((ptr = malloc(size)) == NULL)
    my_puterror("Allocation error.\n");
  return (ptr);
}
