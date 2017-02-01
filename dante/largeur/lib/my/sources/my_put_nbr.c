/*
** my_put_nbr.c for my_put_nbr in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 04:28:50 2015 sonny fournier
** Last update Sat Feb 13 01:43:44 2016 sonny fournier
*/

#include "libmy.h"

int	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    return (write(1, "-2147483648", 11));
  if (nb < 0)
    nb *= -my_putchar('-');
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + 48);
  return (0);
}
