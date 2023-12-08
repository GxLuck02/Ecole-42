/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:32:08 by ttreichl          #+#    #+#             */
/*   Updated: 2023/12/08 13:51:31 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

char	*just_rest(char *string)
{
	char	*res;
	int 	i;
	int 	j;

	if (string == NULL)
			return (NULL);
	res = calloc((ft_strlen(string - len_to_newline(string) + 1)), sizeof (char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (string[i] != '\n' && string[i])
		i++;
	if (!string[i])
	{
		free(string);
		return (NULL);
	}
	i++;
	j = 0;
	while (string[i])
	{
		res[j++] = string[i++];
	}
	res[j] = '\0';
	free (string);
	return (res);
}

char	*get_line(char *string)
{
	char	*nextstring;
	int 	i;

	if (string == NULL)
		return (NULL);
	nextstring = calloc((len_to_newline(string) + 1), sizeof (char));
	if (nextstring == NULL)
		return (NULL);
	i = 0;
	while (string[i] != '\n' && string[i])
	{
		nextstring[i] = string[i];
		i++;
	}
	if (string[i] == '\n')
	{
		nextstring[i] = string[i];
		i++;
	}
	nextstring[i] = '\0';
	return (nextstring);
}

char	*read_file(int fd, char *string)
{
	char	*buf;
	int		bytread;

	buf = calloc(BUFFER_SIZE + 1, sizeof (char));
	if (!buf)
		return (NULL);
	bytread = 1;
	while (!find_new_line(buf) && bytread != 0)
	{
		bytread = read(fd, buf, BUFFER_SIZE);
		if (bytread == -1)
		{
			free (buf);
			return (NULL);
		}
		buf[bytread] = '\0';
		string = join_buf(buf, string);
	}
	free (buf);
	return (string);
}

char	*get_next_line(int fd)
{
	static char 	*buf[4096];
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, 0) < 0)
		return (NULL);
	buf[fd] = read_file(fd, buf[fd]);
	if (!buf[fd])
		return (NULL);
	next_line = get_line(buf[fd]);
	buf[fd] = just_rest(buf[fd]);
	return (next_line);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("karmine.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}