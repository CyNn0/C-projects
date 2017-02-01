/*
** my_put_nbr_base.c for my_put_nbr_base in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Wed Nov 11 23:47:57 2015 sonny fournier
** Last update Sat Dec  5 05:15:59 2015 sonny fournier
*/

#include "../include/printf.h"

void    my_putnbr_base(int nb, char *base)
{
  int   result;
  int   div;
  int   len_base;

  len_base = my_strlen(base);
  if (nb < 0)
    {
      nb = -nb;
    }
  div = 1;
  while ((nb / div) >= len_base)
    div = div * len_base;
  while (div > 0)
    {
      result = (nb / div) % len_base;
      my_putchar(base[result]);
      div = div / len_base;
    }
}
