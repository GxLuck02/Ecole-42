/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:05:19 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/20 14:18:09 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	nbr_word(char const *s, char c)
{
	int	result;

	result = 0;
	if (*s != c && *s)
		result++;
	while (*s != '\0')
	{
		if (*s == c)
		{
			result++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	return (result);
}

static char	**assignment(int len)
{
	char	**dest;

	dest = malloc((len + 1) * sizeof(char *));
	if (dest == 0)
		return (0);
	return (dest);
}

char	**ft_split(char const	*s, char c)
{
	char	**tab_string;
	int		index;
	size_t	len;
	int		nbword;

	index = 0;
	nbword = nbr_word(s, c);
	tab_string = assignment(nbword);
	while (nbword > 0)
	{
		len = ft_strchr(s, c) - s;
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		tab_string[index] = malloc((len + 1) * sizeof(char));
		if (*s != c)
		{
			ft_strlcpy(tab_string[index], s, len);
			nbword--;
			index++;
		}
		s += len + 1;
	}
	tab_string[index] = 0;
	return (tab_string);
}
/*
int	main()
{
	char const	input_string[] = "Hello, world, how, are,, you!";

	char **result = ft_split(input_string, ',');

	if (result)
	{
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("Element %d: %s\n", i, result[i]);
			free(result[i]);
		}
		free(result);
	}
	else
		printf("Erreur d'allocation mémoire.\n");

	return (0);
}
*/