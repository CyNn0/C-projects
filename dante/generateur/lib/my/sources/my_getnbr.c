/*
** my_getnbr.c for  in /home/fourni_s/UNIX/PSU_2015_minitalk/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Tue Feb  2 09:25:53 2016 sonny fournier
** Last update Sat Apr 23 08:53:28 2016 sonny fournier
*/

#include "libmy.h"

int     my_getnbr(char *str)
{
  int   i;
  int   nb;

  i = 0;
  nb = 0;
  while (str[i])
    nb = nb * 10 + (str[i++] - 48);
  return (nb);
}
