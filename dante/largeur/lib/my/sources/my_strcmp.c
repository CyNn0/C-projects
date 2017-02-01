/*
** my_strcmp.c for my_strcmp in /home/fourni_s/rendu/Lib_and_H/lib/my/sources
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Thu Dec  3 07:45:25 2015 sonny fournier
** Last update Sat Feb 13 01:44:36 2016 sonny fournier
*/

#include "libmy.h"

int     my_strcmp(char *s1, char *s2)
{
  return ((*s1 == *s2 && *s1) ? (my_strcmp(++s1, ++s2)) : (*s1 - *s2));
}
