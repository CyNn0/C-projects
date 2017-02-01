/*
** create_list.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:58:30 2016 sonny fournier
** Last update Sat Apr 23 03:58:31 2016 sonny fournier
*/

#include "list.h"

t_list	*create_list()
{
  t_list	*new;

  if ((new = malloc(sizeof *new)) != NULL)
    if (new != NULL)
      {
	new->len = 0;
	new->head = NULL;
	new->tail = NULL;
      }
  return (new);
}
