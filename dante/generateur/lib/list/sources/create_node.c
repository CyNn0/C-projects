/*
** create_node.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:58:39 2016 sonny fournier
** Last update Sat Apr 23 03:58:40 2016 sonny fournier
*/

#include "list.h"

t_node	*create_node(void **data)
{
  t_node	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    {
      new->data = data;
      return (new);
    }
  exit (-1);
}
