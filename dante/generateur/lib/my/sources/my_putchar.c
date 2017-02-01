/*
** my_putchar.c for my_putchar in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 04:23:56 2015 sonny fournier
** Last update Sat Feb 13 01:43:35 2016 sonny fournier
*/

#include "libmy.h"

int	my_putchar(char c)
{
  return (write(1, &c, 1));
}
