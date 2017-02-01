/*
** printf.h for printf in /home/fourni_s/rendu/Lib_and_H/printf_lib/sources/include
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Dec  5 05:13:01 2015 sonny fournier
** Last update Sat Feb 13 01:57:03 2016 sonny fournier
*/

#ifndef PRINTF_H_
# define PRINTF_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../../my/include/libmy.h"

typedef struct  s_flags
{
  char          flag;
  void          (*p)(va_list ap);
}               t_flags;

typedef struct  s_varpr
{
  int           i;
  int           j;
  va_list       ap;
}               t_varpr;

void		my_putnbr_long(long nb);
void		my_putnbr_base(int nb, char *base);
void		my_put_float(double nb);
void		is_i(va_list ap);
void		is_s(va_list ap);
void		is_c(va_list ap);
void		is_u(va_list ap);
void		is_f(va_list ap);
void		is_p(va_list ap);
int		my_printf(const char *format, ...);
extern  t_flags	g_flags[7];

#endif /* !PRINTF_H_ */
