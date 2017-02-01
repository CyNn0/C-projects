/*
** print_list.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:59:40 2016 sonny fournier
** Last update Sat Apr 23 04:44:47 2016 sonny fournier
*/

#include "list.h"

void	print_list(t_list *list)
{
  int		i;
  t_node	*tmp;

  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  i = 0;
	  while (tmp->data[i] != NULL)
	    my_printf("%s = ", tmp->data[i++]);
	  tmp = tmp->next;
	}
    }
  my_printf("\n");
}
