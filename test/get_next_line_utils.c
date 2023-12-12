/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:40:10 by ttreichl          #+#    #+#             */
/*   Updated: 2023/12/11 18:39:12 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *string)
{
	int		i;

	i = 0;
	if (string == NULL)
		return (0);
	while (string[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*join_buf(char *buf, char *str)
{
	int		i;
	int		j;
	char	*tmpstring;

	if (!str)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!buf || !str)
		return (NULL);
	tmpstring = malloc((ft_strlen(str) + ft_strlen(buf) + 1) * sizeof (char));
	if (tmpstring == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i])
			tmpstring[i] = str[i];
	while (buf[j] != '\0')
		tmpstring[i++] = buf[j++];
	tmpstring[ft_strlen(buf) + ft_strlen(str)] = '\0';
	free(str);
	return (tmpstring);
}
