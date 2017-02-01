/*
** perso.h for  in /home/fourni_s/UNIX/perso/include
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 00:28:23 2016 sonny fournier
** Last update Sat Apr 23 09:11:48 2016 sonny fournier
*/

#ifndef PERSO_H_
# define PERSO_H_

/*
**  INCLUDES
*/

#include <unistd.h>
#include <stdlib.h>
#include "../../my/include/libmy.h"
#include "../../printf/sources/include/printf.h"

/*
**  PROTOTYPES
*/

void	my_puterror(char *s);
void	*xmalloc(int size);
char	*get_next_line(const int fd);
char	*my_strtok(char *str, const char *delim);
char	*my_strcut(char *s, int beg, int nb, int end);

#endif /* !PERSO_H_ */
