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
#include <string.h>
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
	{
		free (string);
		return (NULL);
	}
	i++;
	j = 0;
	while (string[i])
		res[j++] = string[i++];
	res[j] = '\0';
	free (string);
	return (res);
}

char	*ft_get_line(char *string)
{
	char	*nextstring;
	int		i;

	i = 0;
	if (!string[i])
		return (NULL);
	while (string[i] && string[i] != '\n')
		i++;
	nextstring = (char *)malloc((i + 2) * sizeof (char));
	if (nextstring == NULL)
		return (NULL);
	i = 0;
	while (string[i] != '\n' && string[i])
	{
		nextstring[i] = string[i];
		i++;
	}
	if (string[i] == '\n' && string[i])
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

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof (char));
	if (!buf)
		return (NULL);
	bytread = 1;
	while (!ft_strchr(string, '\n') && bytread > 0)
	{
		bytread = read(fd, buf, BUFFER_SIZE);
		if (bytread == -1)
		{
			free (buf);
			free (string);
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

	if (fd < 0 || BUFFER_SIZE <= 0 || (read(fd, buf, 0) < 0))
		return (0);
	buf = read_file(fd, buf);
	if (!buf)
		return (NULL);
	next_line = ft_get_line(buf);
	buf = just_rest(buf);
	return (next_line);
}
/*
int main(void)
{
	char *line;
	int i;
	int fd1;
	FILE *file;

	fd1 = open("karmine.txt", O_RDONLY);
	file = fopen("karmine.txt", "r");

	if (fd1 == -1 || file == NULL)
	{
		perror("Erreur lors de l'ouverture du fichier");
		return 1;
	}

	i = 1;

	// Utilisez la valeur retournée par get_next_line comme condition de la boucle
	while ((line = get_next_line(fd1)) != NULL)
	{
		char buffer[500];

		// Utilisez fgets pour lire une ligne du fichier avec la bibliothèque standard
		if (fgets(buffer, sizeof(buffer), file) != NULL)
		{
			printf("line [%02d] (get_next_line): %s", i, line);
			printf("line [%02d] (fgets): %s", i, buffer);
			// Comparez les deux résultats ici si nécessaire
		}
		else
		{
			break; // Fin de fichier avec fgets
		}

		free(line);
		i++;
	}

	close(fd1);
	fclose(file);

	return 0;
}*/