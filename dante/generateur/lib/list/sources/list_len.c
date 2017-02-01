/*
** list_len.c for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:59:31 2016 sonny fournier
** Last update Sat Apr 23 03:59:33 2016 sonny fournier
*/

#include "list.h"

int	list_len(t_list *list)
{
  int	len;

  len = 0;
  if (list != NULL)
    len = list->len;
  return (len);
}
