/*
** my_puterror.c for  in /home/fourni_s/UNIX/myshrc
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 04:02:53 2016 sonny fournier
** Last update Sat Apr 23 04:03:12 2016 sonny fournier
*/

#include "perso.h"

void    my_puterror(char *s)
{
  my_printf("%s", s);
  exit(-1);
}
