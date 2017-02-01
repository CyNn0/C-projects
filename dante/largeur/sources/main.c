/*
** main.c for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:55:47 2016 sonny fournier
** Last update Sun May 29 21:21:14 2016 boris saint-bonnet
*/

#include "my.h"

int		main(int ac, char **av)
{
  t_var		*var;

  if ((var = malloc(sizeof(t_var))) == NULL)
    return (-1);
  if (ac != 2)
    return (my_printf("Use: ./solver map\n"));
  if ((var->map = get_map(av[1], var)) == NULL)
    return (my_printf("Can't open map\n"));
  algo(var);
  my_free_tab(var->map);
  free(var);
  return (0);
}
