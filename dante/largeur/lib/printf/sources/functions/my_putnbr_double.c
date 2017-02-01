/*
** my_putnbr_double.c for my_putnbr_double in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Nov 12 15:50:37 2015 sonny fournier
** Last update Mon Apr 25 05:33:12 2016 sonny fournier
*/

#include "printf.h"

void    my_put_float(double nb)
{
  my_put_nbr(nb);
  my_putchar('.');
  if (nb < 0)
    nb = nb * -1000000;
  else
    nb = nb * 1000000;
  my_put_nbr((((long int)nb) % 1000000));
}
