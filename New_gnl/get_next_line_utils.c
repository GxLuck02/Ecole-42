/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:11:04 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/29 16:11:04 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	find_new_line(t_list *list)
{
	int	i;

	if (list == NULL)
		return (0);
	while (list)
	{
		i = 0;
		while (list->storage[i] && i < BUFFER_SIZE)
		{
			if (list->storage[i] == '\n')
				return (1);
			i++;
		}
		list = list->next;
	}
	return (0);
}

t_list	*find_last_node(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

int	len_to_newline(t_list *list)
{
	int	len;
	int	j;

	len = 0;
	if (list == NULL)
		return (0);
	while (list)
	{
		j = 0;
		while (list->storage[j] != '\0')
		{
			if (list->storage[j] == '\n')
				return (len + 1);
			j++;
			len++;
		}
		list = list->next;
	}
	return (len);
}

void	cpy_str(char *str, t_list *list)
{
	int	i;
	int	j;

	i = 0;
	if (list == NULL)
		return ;
	while (list)
	{
		j = 0;
		while (list->storage[j] != '\0')
		{
			if (list->storage[j] == '\n')
			{
				str[i++] = '\n';
				str[i] = '\0';
				return ;
			}
			str[i++] = list->storage[j++];
		}
		list = list->next;
	}
	str[i] = '\0';
}

void	deallocall(t_list **list, t_list *clean_node, char *buf)
{
	t_list	*tmp;

	if ((*list) == NULL)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free ((*list)->storage);
		free (*list);
		*list = tmp;
	}
	*list = NULL;
	if (clean_node->storage[0])
		*list = clean_node;
	else
	{
		free(buf);
		free(clean_node);
	}
}
