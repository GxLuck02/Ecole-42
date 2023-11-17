/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:10:00 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/16 11:10:19 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_GET_NEXT_LINE_H
# define GET_NEXT_LINE_GET_NEXT_LINE_H

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

void	*ft_calloc(size_t nbrelement, size_t elementsize);
void	ft_bzero(void *ptr, size_t nbroct);
void	*ft_memset(void *ptr, int value, size_t len);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *word);

#endif