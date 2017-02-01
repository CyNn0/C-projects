/*
** utils.c for  in /home/fourni_s/UNIX/WarpZone/Astar
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sun May 22 10:41:30 2016 sonny fournier
** Last update Sun May 22 11:33:38 2016 sonny fournier
*/

#include "my.h"

int	my_strlen(char *s)
{
  int	i;

  i = -1;
  while (s[++i]);
  return (i);
}

int	my_putstr(char *s, int fd)
{
  int	i;

  i = -1;
  while (s[++i])
    write(fd, &s[i], 1);
  return (0);
}

int	my_getnbr(char *s)
{
  int	i;
  int	sig;
  int	nb;

  i = 0;
  nb = 0;
  sig = 1;
  while (s[i] && (s[i] == '+' || s[i] == '-'))
    {
      if (s[i] == '-')
	sig *= -1;
      i++;
    }
  while (s[i])
    {
      if (s[i] > '9' || s[i] < '0')
	return (-1);
      nb *= 10;
      nb += s[i] - 48;
      i++;
    }
  return (nb * sig);
}

char	*my_strcat(char *a, char *b, int fre)
{
  char	*s;
  int	i;
  int	j;

  i = -1;
  if ((s = malloc(my_strlen(a) + my_strlen(b) + 1)) == NULL)
    return (NULL);
  while (a[++i])
    s[i] = a[i];
  j = -1;
  while (b[++j])
    s[i++] = b[j];
  s[i] = '\0';
  if (fre == 1)
    free(a);
  return (s);
}

char	*read_inf(int fd)
{
  char	buf[1025];
  char	*s;
  int	pos;

  s = my_strcat("", "", 0);
  while ((pos = read(fd, buf, 1024)) > 0)
    {
      buf[pos] = '\0';
      if ((s = my_strcat(s, buf, 1)) == NULL)
	return (NULL);
    }
  if (pos < 0)
    {
      free(s);
      return (NULL);
    }
  return (s);
}
