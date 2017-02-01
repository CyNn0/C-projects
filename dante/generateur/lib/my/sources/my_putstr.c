/*
** my_putstr.c for my_putstr in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 04:32:08 2015 sonny fournier
** Last update Sat Apr 23 08:46:34 2016 sonny fournier
*/

#include "libmy.h"

void	my_putstr(char *s)
{
  write(1, s, my_strlen(s));
}
