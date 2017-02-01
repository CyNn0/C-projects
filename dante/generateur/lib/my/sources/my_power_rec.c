/*
** my_power_rec.c for  in /home/fourni_s/UNIX/myshrc/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 08:49:43 2016 sonny fournier
** Last update Sat Apr 23 08:49:44 2016 sonny fournier
*/

#include "libmy.h"

int     my_power_rec(int nb, int power)
{
  return (power < 2 ? nb : nb * my_power_rec(nb, power - 1));
}
