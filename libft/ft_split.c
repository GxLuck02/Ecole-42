/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:05:19 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 19:05:19 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


char	*ft_strchr(const char	*string, int searchChar)
{
	while (*string != '\0')
	{
		if (*string == searchChar)
			return ((char *)string);
		string++;
	}
	return (0);
}

char	*ft_strlcpy(char *dest, const char *src, size_t lenght)
{
	size_t	index;

	index = 0;
	while (index < lenght && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}




int	nbr_word(char const *s, char c)
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

char	**ft_split(char const	*s, char c)
{
	char	**tab_string;
	int		index;
	size_t	len;
	int		nbword;

	index = 0;
	nbword = nbr_word(s, c);
	tab_string = malloc((nbword + 1) * sizeof(char *));
	if (tab_string == 0)
		return (0);
	while (nbword > 0)
	{
		len = ft_strchr(s, c) - s;
		if (!ft_strchr(s,c))
			len = ft_strlen(s);
		tab_string[index] = malloc((len + 1) * sizeof(char));
		ft_strlcpy(tab_string[index], s, len);
		nbword--;
		index++;
		s += len + 1;
	}
	tab_string[index] = 0;
	return (tab_string);
}

int	main(int ac, char **av)
{
	printf("la\n");
	if (ac != 3)
		return 0;
	char const	*input_string = av[1];
	char	delimiter = (char) av[2];

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