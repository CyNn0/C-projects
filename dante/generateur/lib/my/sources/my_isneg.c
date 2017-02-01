/*
** my_isneg.c for  in /home/fourni_s/UNIX/myshrc/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 08:49:30 2016 sonny fournier
** Last update Sat Apr 23 08:49:31 2016 sonny fournier
*/

#include "libmy.h"

int	my_isneg(int nb)
{
  return (nb < 0 ? 1 : 0);
}
