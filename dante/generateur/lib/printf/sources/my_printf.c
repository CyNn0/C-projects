/*
** my_printff.c for my_printff in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Wed Nov 11 17:32:07 2015 sonny fournier
** Last update Fri Jan 22 13:22:52 2016 sonny fournier
*/

#include "include/printf.h"

t_flags g_flags [7] = {
  {'i', &is_i},
  {'d', &is_i},
  {'s', &is_s},
  {'c', &is_c},
  {'u', &is_u},
  {'f', &is_f},
  {'p', &is_p},
};

void    init(int *i, int *j)
{
  *i = 0;
  *j = 0;
}

int	my_printf(const char *format, ...)
{
  t_varpr	var;

  va_start(var.ap, format);
  init(&var.i, &var.j);
  while (format[var.i])
    {
      if (format[var.i] == '%')
	{
	  var.i++;
	    while (var.j < 7)
	      {
		if (format[var.i] == g_flags[var.j].flag)
		  g_flags[var.j].p(var.ap);
		var.j++;
	      }
	  var.j = 0;
	}
      else
	my_putchar(format[var.i]);
      var.i++;
    }
  return (0);
}
