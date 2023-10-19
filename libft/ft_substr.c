/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:48:09 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 16:48:09 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*newstring;
	char	*final;

	newstring = malloc((len) * sizeof (char));
	final = newstring;
	if (newstring == 0)
		return (0);
	while (start != 0)
	{
		src++;
		start--;
	}
	while (len > 0)
	{
		*newstring = *src;
		newstring++;
		src++;
		len--;
	}
	*newstring = '\0';
	return (final);
}
/*
int main()
{
	char	start[]= "La meilleur couleur est le bleu.";

	char	*result = ft_substr(start, 27, 4);
	printf("%s\n", result);

	free(result);
}
 */
