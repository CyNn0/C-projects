/*
** others_functions2.c for others_functions2 in /home/fourni_s/rendu/Tests/test_printf
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Nov 12 19:20:10 2015 sonny fournier
** Last update Sat Dec  5 05:17:34 2015 sonny fournier
*/

#include "../include/printf.h"

void	is_p(va_list ap)
{
  unsigned int	adr;
  char          *base;
  char          res[9];
  int           i;

  adr = va_arg(ap, unsigned int);
  base = "0123456789abcdef";
  i = 8;
  while ((adr / 16) > 0 || i >= 8)
    {
      res[i] = base[(adr % 16)];
      adr = adr / 16;
      i--;
    }
  res[i] = base[(adr % 16)];
  write(1, "0x", 2);
  while (i < 9)
    write(1, &res[i++], 1);
  return ;
}
