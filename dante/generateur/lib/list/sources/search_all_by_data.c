/*
** search_all_by_data.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 04:00:01 2016 sonny fournier
** Last update Sat Apr 23 04:00:02 2016 sonny fournier
*/

#include "list.h"

t_list		*search_all_by_data(t_list *list, void **data)
{
  t_list	*ret;
  t_node	*tmp;

  ret = NULL;
  tmp = list->head;
  if (list != NULL)
    {
      while (tmp != NULL)
	{
	  if (tmp->data == data)
	    {
	      if (ret == NULL)
		ret = create_list();
	      ret = add_end(ret, data);
	    }
	  tmp = tmp->next;
	}
    }
  return (ret);
}
