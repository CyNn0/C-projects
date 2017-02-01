/*
** list.c for  in /home/fourni_s/UNIX/Work/IA/dante/Largeur
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 22:16:58 2016 sonny fournier
** Last update Sun May 22 22:26:46 2016 sonny fournier
*/

#include "my.h"

t_list	*add_end(t_list *list, int x, int y, int px, int py)
{
  t_list        *tmp;

  if ((tmp = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  tmp->x = x;
  tmp->y = y;
  tmp->px = px;
  tmp->py = py;
  if (list == NULL)
    {
      tmp->next = NULL;
      tmp->prev = NULL;
    }
  else
    {
      while (list->next != NULL)
        list = list->next;
      tmp->prev = list;
      tmp->next = NULL;
      list->next = tmp;
    }
  return (tmp);
}

int		inside_list(t_list *list, int x, int y)
{
  while (list->prev != NULL)
    list = list->prev;
  while (list->next != NULL)
    {
      if (list->x == x && list->y == y)
	return (1);
      list = list->next;
    }
  return (0);
}

void            del_list(t_list *list)
{
  t_list        *tmp;

  while (list->prev != NULL)
    list = list->prev;
  tmp = list;
  while (tmp->next)
    {
      list = list->next;
      free(tmp);
      tmp = list;
    }
  free(tmp);
}
