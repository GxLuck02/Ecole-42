/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:09:34 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/16 11:09:34 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_line(t_list *list)
{
	int		len;
	char	*nextstring;

	len = 0;
	while (list->next != NULL)
	{
		len += ft_strlen(list->storage);
		list = list->next;
	}
	while (list->next != NULL)
	{
		nextstring[i] = list->storage[j];
	}
}

int	find_new_line(t_list *list)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (list->storage[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

void	add_to_list(char *Buf, t_list **list)
{
	t_list	*new_node;
	t_list	*current_node;

	new_node = malloc(sizeof (t_list));
	if (new_node == NULL)
	{
		free(new_node);
		return ;
	}
	new_node->storage = ft_strdup(Buf);
	if (new_node->storage == NULL)
	{
		free(new_node->storage);
		return ;
	}
	new_node->next = 0;
	current_node = *list;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
}

void	creatlist(t_list **list, int fd)
{
	int		char_read;
	char	*buf;

	while (!find_new_line(*list))
	{
		buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (buf == NULL)
			return ;
		char_read = read(fd, buf, BUFFER_SIZE);
		if (char_read == 0)
		{
			free(buf);
			return ;
		}
		buf[char_read] = '\0';
		add_to_list(buf, list);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	char			*next_line

	*list = NULL;
	creatlist(&list, fd);
	if (list == NULL)
		return (0);
	next_line = get_line(list);

}

int main()
{
	int		fd;
	char	*line;
	int		lines;

	lines = 1;
	fd = open("text.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%d->%s\n", lines++, line);
	}
	return (0);
}