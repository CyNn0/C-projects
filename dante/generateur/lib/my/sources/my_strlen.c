/*
** my_strlen.c for  in /home/fourni_s/UNIX/myshrc/lib/my
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 08:47:39 2016 sonny fournier
** Last update Sat Apr 23 08:47:41 2016 sonny fournier
*/

#include "libmy.h"

int	my_strlen(char *s)
{
  return ((*s) != '\0' ? 1 + my_strlen(s + 1) : 0);
}
