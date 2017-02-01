/*
** others_functions.c for others_functions in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Nov 12 19:19:04 2015 sonny fournier
** Last update Mon Apr 25 05:32:23 2016 sonny fournier
*/

#include "printf.h"

void    is_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void    is_s(va_list ap)
{
  my_putstr(va_arg(ap, char*));
}

void    is_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void    is_u(va_list ap)
{
  char *base;

  base = "0123456789";
  my_putnbr_base(va_arg(ap, int), base);
}

void    is_f(va_list ap)
{
  my_put_float(va_arg(ap, double));
}
