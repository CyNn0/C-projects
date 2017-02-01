/*
** my_strtok.c for  in /home/fourni_s/UNIX/perso
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 00:30:28 2016 sonny fournier
** Last update Sat Apr 23 00:30:50 2016 sonny fournier
*/

#include "perso.h"

int     my_strspn(const char *p, const char *s)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (p[i])
    {
      while (s[j])
	{
	  if (s[j] == p[i])
	    break;
	  j++;
	}
      if (!s[j])
	break;
      i++;
    }
  return (i);
}

int     my_strcspn(char *str, const char *search)
{
  char          c;
  const char    *p;
  char          *s;

  s = str;
  c = *s;
  while (c != 0)
    {
      p = search;
      while (*p != 0)
	{
	  if (c == *p)
	    return (s - str);
	  p++;
	}
      s++;
      c = *s;
    }
  return (s - str);
}

char    *my_strtok(char *str, const char *delim)
{
  static char   *p = 0;

  if (str)
    p = str;
  else if (!p)
    return 0;
  str = p + my_strspn(p, delim);
  p = str + my_strcspn(str, delim);
  if (p == str)
    return (p = 0);
  p = *p ? *p = 0, p + 1 : 0;
  return (str);
}
