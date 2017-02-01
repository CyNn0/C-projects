/*
** my_square_root.c for my_square_root in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 04:58:45 2015 sonny fournier
** Last update Sat Feb 13 01:44:14 2016 sonny fournier
*/

#include "libmy.h"

int     my_square_root(int nb)
{
  int   root;

  root = 1;
  while (root <= nb / 2)
    {
      if (root * root == nb)
	return (root);
      root++;
    }
  if (nb % 2 != 0)
    return (0);
  return (0);
}
