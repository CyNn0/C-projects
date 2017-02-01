/*
** add_beg.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:58:13 2016 sonny fournier
** Last update Sat Apr 23 03:58:14 2016 sonny fournier
*/

#include "list.h"

t_list	*add_beg(t_list *list, void **data)
{
  t_node	*new;

  new = create_node(data);
  if (list != NULL)
    {
      if (new != NULL)
	{
	  new->prev = NULL;
	  if (list->tail == NULL)
	    {
	      new->next = NULL;
	      list->head = new;
	      list->tail = new;
	    }
	  else
	    {
	      list->head->prev = new;
	      new->next = list->head;
	      list->head = new;
	    }
	  list->len++;
	}
    }
  return (list);
}
