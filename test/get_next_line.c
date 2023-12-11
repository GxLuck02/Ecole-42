/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:39:11 by ttreichl          #+#    #+#             */
/*   Updated: 2023/12/11 18:44:24 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*just_rest(char *string)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	while (string[i] != '\n' && string[i])
		i++;
	if (!string[i])
	{
		free(string);
		return (NULL);
	}
	res = (char *)malloc(((ft_strlen(string)- i + 1)) * sizeof (char));
	if (!res)
		return (NULL);
	i++;
	j = 0;
	while (string[i])
		res[j++] = string[i++];
	res[j] = '\0';
	free (string);
	return (res);
}

char	*get_line(char *string)
{
	char	*nextstring;
	int		i;

	i = 0;
	if (!string[i])
		return (NULL);
	while (string[i] && string[i] != '\n')
		i++;
	nextstring = (char *)malloc((i + 1) * sizeof (char));
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

	buf = malloc((BUFFER_SIZE + 1) * sizeof (char));
	if (!buf)
		return (NULL);
	bytread = 1;
	while (!ft_strchr(string, '\n') && bytread != 0)
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
	static char		*buf;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = read_file(fd, buf);
	if (!buf)
		return (NULL);
	next_line = get_line(buf);
	buf = just_rest(buf);
	return (next_line);
}
/*
int main(void)
{
	char    *line;
	int     i;
	int     fd1;

	fd1 = open("karmine.txt", O_RDONLY);
	i = 1;

	// Utilisez la valeur retournée par get_next_line comme condition de la boucle
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("line [%02d]: %s\n", i, line);
		free(line);
		i++;
	}

	close(fd1);
	return (0);
}
*/