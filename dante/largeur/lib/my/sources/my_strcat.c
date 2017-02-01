/*
** my_strcat.c for my_strcat in /home/fourni_s/rendu/PSU_2015_my_popup/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Tue Dec  8 20:36:20 2015 sonny fournier
** Last update Sun May 22 21:51:36 2016 sonny fournier
*/

#include "libmy.h"

char    *my_strcat(char *path, char *command, int bool)
{
  char  *ret;
  int   i;
  int   j;

  if (path == NULL || command == NULL)
    return (NULL);
  if ((ret = malloc(sizeof(char) * (my_strlen(path) +
				     my_strlen(command) + 2))) == NULL)
    return (NULL);
  i = -1;
  while (path[++i] != '\0')
    ret[i] = path[i];
  j = 0;
  while (command[j] != '\0')
    ret[i++] = command[j++];
  ret[i] = '\0';
  if (bool)
    free(path);
  return (ret);
}
