/*
** del_list.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:59:21 2016 sonny fournier
** Last update Sat Apr 23 03:59:22 2016 sonny fournier
*/

#include "list.h"

void	del_list(t_list **list)
{
  t_node	*tmp;
  t_node	*del;

  if (*list != NULL)
    {
      tmp = (*list)->head;
      while (tmp != NULL)
	{
	  del = tmp;
	  tmp = tmp->next;
	  free(del);
	}
      free(*list), *list = NULL;
    }
}
