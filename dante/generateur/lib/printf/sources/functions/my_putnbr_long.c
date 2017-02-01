/*
** my_putnbr_long.c for my_putnbr_long in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Nov 12 21:07:58 2015 sonny fournier
** Last update Sat Dec  5 05:16:28 2015 sonny fournier
*/

#include "../include/printf.h"

void    my_putnbr_long(long nb)
{
  int   neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  neg = 1;
	  nb++;
	}
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
