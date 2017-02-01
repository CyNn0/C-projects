/*
** fill_data.c for  in /home/fourni_s/UNIX/myshrc
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 04:36:23 2016 sonny fournier
** Last update Sat Apr 23 04:56:01 2016 sonny fournier
*/

#include "list.h"

void	fill_data(void **tab, char *s1, char *s2)
{
  tab[0] = (void *)my_strdup(s1);
  tab[1] = (void *)my_strdup(s2);
  tab[2] = NULL;
}
