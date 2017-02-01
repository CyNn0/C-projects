/*
** add_end.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:58:22 2016 sonny fournier
** Last update Sat Apr 23 03:58:23 2016 sonny fournier
*/

#include "list.h"

t_list	*add_end(t_list	*list, void **data)
{
  t_node	*new;

  new = create_node(data);
  if (list != NULL)
    {
      if (new != NULL)
	{
	  new->next = NULL;
	  if (list->tail == NULL)
	    {
	      new->prev = NULL;
	      list->head = new;
	      list->tail = new;
	    }
	  else
	    {
	      list->tail->next = new;
	      new->prev = list->tail;
	      list->tail = new;
	    }
	  list->len++;
	}
    }
  return (list);
}
