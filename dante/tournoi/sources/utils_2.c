/*
** utils_2.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 21:00:09 2016 sonny fournier
** Last update Sun May 22 21:00:37 2016 sonny fournier
*/

#include "my.h"

char    *my_strcut(char *s, int beg, int nb, int end)
{
  int   i;
  char  *ret;

  i = 0;
  if (nb > 0)
    {
      if ((ret = malloc(sizeof(char) * nb + 1)) == NULL)
	return (NULL);
      while ((s[beg + end]) != '\0' && i != nb)
	ret[i++] = s[beg++];
    }
  else
    {
      if ((ret = malloc(sizeof(char) * my_strlen(s) - beg + 1)) == NULL)
	return (NULL);
      while ((s[beg + end]) != '\0')
	ret[i++] = s[beg++];
    }
  ret[i] = '\0';
  return (ret);
}

int     get_map(char *path, t_read *lab)
{
  int   fd;
  char  *s;

  if ((fd = open(path, O_RDONLY)) < 0 || (s = read_inf(fd)) == NULL)
    return (my_putstr("Error: can't open file.\n", 2));
  else if (check_map(s, lab) == 0)
    {
      free(s);
      return (my_putstr("Invalid map.\n", 2));
    }
  free(s);
  close(fd);
  return (1);
}
