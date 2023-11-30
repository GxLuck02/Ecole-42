/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:11:42 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/30 18:56:18 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct list
{
	char		*storage;
	struct list	*next;
}				t_list;

char	*get_next_line(int fd);
void	creatlist(t_list **list, int fd);
void	add_to_list(char *Buf, t_list **list);
void	dellist(t_list **list);
char	*get_line(t_list *list);
int		find_new_line(t_list *list);
t_list	*find_last_node(t_list *list);
int		len_to_newline(t_list *list);
void	cpy_str(char *str, t_list *list);
void	deallocall(t_list **list, t_list *clean_node, char *buf);
#endif