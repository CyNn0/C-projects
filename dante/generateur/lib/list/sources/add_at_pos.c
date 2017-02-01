/*
** add_at_pos.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:58:06 2016 sonny fournier
** Last update Sat Apr 23 03:58:07 2016 sonny fournier
*/

#include "list.h"

void    else_add_at_pos(t_list **list, void **data, t_node **new, t_node **tmp)
{
  (*new) = create_node(data);
  if (*new != NULL)
    {
      (*tmp)->next->prev = (*new);
      (*tmp)->prev->next = (*new);
      (*new)->prev = (*tmp)->prev;
      (*new)->next = (*tmp);
      (*list)->len++;
    }
}

t_list          *add_at_pos(t_list *list, void **data, int pos)
{
  int           i;
  t_node        *new;
  t_node        *tmp;

  i = 1;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL && i <= pos)
	{
	  if (pos == i)
	    {
	      if (tmp->next == NULL)
		list = add_end(list, data);
	      else if (tmp->prev == NULL)
		list = add_beg(list, data);
	      else
		else_add_at_pos(&list, data, &new, &tmp);
	    }
	  else
	    tmp = tmp->next;
	  i++;
	}
    }
  return (list);
}
