/*
** list.h for  in /home/fourni_s/UNIX/Presets/lib/list
** 
** Made by sonny fournier
** Login   <fourni_s@epitech.net>
** 
** Started on  Sat Apr 23 03:57:19 2016 sonny fournier
** Last update Sat Apr 23 05:12:19 2016 sonny fournier
*/

#ifndef LIST_H_
# define LIST_H_

/*
**  INCLUDES
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../printf/sources/include/printf.h"

/*
**  STRUCTS
*/

typedef struct	s_node
{
  void		**data;
  struct s_node	*next;
  struct s_node	*prev;
}		t_node;

typedef struct	s_list
{
  int		len;
  t_node	*tail;
  t_node	*head;
}		t_list;

/*
**  PROTOTYPES
*/

void		fill_data(void **tab, char *s1, char *s2);

void		print_list(t_list *list);
t_list		*rev_list(t_list *list);
int		list_len(t_list *list);

t_node		*create_node();
t_list		*create_list();

t_list		*add_beg(t_list *list, void **data);
t_list		*add_end(t_list *list, void **data);
t_list		*add_at_pos(t_list *list, void **data, int pos);

void		del_list(t_list **list);
t_list		*del_by_pos(t_list *list, int pos);
t_list		*del_all_by_data(t_list *list, void **data);
t_list		*del_first_by_data(t_list *list, void **data);

t_list          *search_all_by_data(t_list *list, void **data);
t_list          *search_first_by_data(t_list *list, void **data);

#endif /* !LIST_H_ */
