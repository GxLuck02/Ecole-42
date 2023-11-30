/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:09:17 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/30 19:00:36 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	dellist(t_list **list)
{
	t_list	*clean_node;
	t_list	*last_node;
	int		i;
	int		j;
	char	*buf;

	clean_node = malloc(sizeof (t_list));
	buf = malloc(BUFFER_SIZE + 1);
	if (clean_node == NULL || buf == NULL)
		return ;
	last_node = find_last_node(*list);
	i = 0;
	j = 0;
	while (last_node->storage[i] != '\n' && last_node->storage[i] != '\0')
		i++;
	while (last_node->storage[i] && last_node->storage[++i])
	{
		buf[j] = last_node->storage[i];
		j++;
	}
	buf[j] = '\0';
	clean_node->storage = buf;
	clean_node->next = NULL;
	deallocall(list, clean_node, buf);
}

char	*get_line(t_list *list)
{
	int		len;
	char	*nextstring;

	if (list == NULL)
		return (NULL);
	len = len_to_newline(list);
	if (len == 0)
		return (NULL);
	nextstring = malloc(len + 1);
	if (nextstring == NULL)
		return (NULL);
	cpy_str(nextstring, list);
	return (nextstring);
}

void	add_to_list(char *buf, t_list **list)
{
	t_list	*new_node;
	t_list	*last_node;

	last_node = find_last_node(*list);
	new_node = malloc(sizeof (t_list));
	if (new_node == NULL)
		return ;
	if (NULL == last_node)
		*list = new_node;
	else
		last_node->next = new_node;
	new_node->storage = buf;
	new_node->next = NULL;
}

void	creatlist(t_list **list, int fd)
{
	int		char_read;
	char	*buf;

	while (!find_new_line(*list))
	{
		buf = malloc(BUFFER_SIZE + 1);
		if (buf == NULL)
			return ;
		char_read = (int)read(fd, buf, BUFFER_SIZE);
		if (!char_read)
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
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, 0) < 0)
		return (NULL);
	creatlist(&list, fd);
	if (list == NULL)
		return (NULL);
	next_line = get_line(list);
	dellist(&list);
	return (next_line);
}

int	main()
{
	int		fd;
	char	*line;
	int		lines;

	lines = 1;
	fd = open("karmine.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
		printf("%d->%s\n", lines++, line);
	return (0);
}
