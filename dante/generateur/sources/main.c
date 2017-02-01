/*
** main.c for main in /home/fourni_s/rendu/Lib_and_H
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Dec  5 05:58:00 2015 sonny fournier
** Last update Sun May 29 20:44:13 2016 sonny fournier
*/

#include "my.h"

int	main(int ac, char **av)
{
  if (ac < 3)
    {
      my_printf("Use: ./imperfect widht height parfait/imparfait\n");
      return (-1);
    }
  if (my_getnbr(av[1]) < 2 || my_getnbr(av[2]) < 2)
    {
      my_printf("Map size must be superior\n");
      return (-1);
    }
  if (my_getnbr(av[1]) > 10000 || my_getnbr(av[2]) > 10000 ||
      (my_getnbr(av[1]) * my_getnbr(av[2])) > 100000000)
    {
      my_printf("Map size too big\n");
      return (-1);
    }
  srand(time(NULL));
  init_struct(my_getnbr(av[1]), my_getnbr(av[2]), av[3]);
  return (0);
}
