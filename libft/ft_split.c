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

int	nbr_word(char const *s, char c)
{
	int	result;

	result = 0;
	if (*s != c && *s)
		result++;
	while (*s != '\0')
	{
		if (*s == c && *s != *(s + 1) && *(s + 1) != '\0')
			result++;
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
		tab_string[index] = malloc((len + 2) * sizeof(char));
		ft_strlcpy(tab_string[index], s, len);
		tab_string[index][len] = '\0';
		nbword--;
		index++;
		s += len + 1;
	}
	tab_string[index] = NULL;
	return (tab_string);
}

int	main(void)
{
	char const	*input_string = "Hello, world,how,are, you";
	char	delimiter = ',';

	char **result = ft_split(input_string, delimiter);

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