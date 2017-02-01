/*
** libmy.h for libmy in /home/fourni_s/rendu/Lib_and_H/lib/my/sources/include
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Dec  5 12:15:19 2015 sonny fournier
** Last update Sat Apr 23 08:58:03 2016 sonny fournier
*/

#ifndef LIBMY_H_
# define LIBMY_H_

#include <unistd.h>
#include <stdlib.h>
#include "../../perso/include/perso.h"

int	my_isneg(int nb);
int     my_str_isnum(char *str);
int     my_str_isalpha(char *str);
int     my_str_isprintable(char *str);

int     my_strlen(char *s);
int	my_getnbr(char *str);
int     my_square_root(int nb);
int	my_power_rec(int nb, int power);
char    *my_revstr(char *str);

int     my_strcmp(char *s1, char *s2);
int     my_strstr(char *str, char *to_find);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strdup(char *s);
char    *my_strcat(char *dest, char *src);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);

char	**my_str_to_wordtab(char *str, char c);

int	my_putchar(char c);
int	my_put_nbr(int nb);
void    my_putstr(char *s);

#endif /* !LIBMY_H_ */
