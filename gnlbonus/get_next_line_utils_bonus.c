/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:34:01 by ttreichl          #+#    #+#             */
/*   Updated: 2023/12/08 13:37:22 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

int 	ft_strlen(char *string)
{
	int		i;

	i = 0;
	if (string == NULL)
		return (0);
	while (string[i] != '\0')
		i++;
	return (i);
}

int		len_to_newline(char *string)
{
	int 	len;

	len = 0;
	if (string == NULL)
		return (0);
	while (*string != '\0')
	{
		if (*string == '\n')
			return (len + 1);
		len++;
		string++;
	}
	return (len);
}

int		find_new_line(char *buf)
{
	if (buf == NULL)
		return (0);
	while (*buf != '\0')
	{
		if (*buf == '\n')
			return (1);
		buf++;
	}
	return (0);
}

char	*join_buf(char *buf, char *string)
{
	int		i;
	int 	j;
	char	*tmpstring;

	if (!string)
	{
		string = calloc(1 ,sizeof(char));
		if (string == NULL)
			return (NULL);
		string[0] = '\0';
	}
	if (!buf)
		return (NULL);
	tmpstring = calloc((ft_strlen(string) + ft_strlen(buf) + 1), sizeof (char));
	if (tmpstring == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (string != NULL)
	{
		while (string[++i] != '\0')
			tmpstring[i] = string[i];
	}
	while (buf[j] != '\0')
		tmpstring[i++] = buf[j++];
	tmpstring[i] = '\0';
	free(string);
	string = NULL;
	return (tmpstring);
}
