/*
** my_getnbr.c for  in /home/fourni_s/UNIX/PSU_2015_minitalk/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Tue Feb  2 09:25:53 2016 sonny fournier
** Last update Mon Apr 25 04:06:40 2016 sonny fournier
*/

#include "libmy.h"

int     my_getnbr(char *str)
{
  int   i;
  int	neg;
  int   nb;

  i = 0;
  nb = 0;
  neg = 0;
  if (str[i] == '-')
    {
      i++;
      neg = 1;
    }
  while (str[i])
    nb = nb * 10 + (str[i++] - 48);
  if (neg == 1)
    return (-nb);
  return (nb);
}
