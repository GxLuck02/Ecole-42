/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:27:44 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 15:56:55 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*newstring;
	char	*result;

	newstring = malloc((ft_strlen(src) + 1) * sizeof(char));
	result = newstring;
	if (newstring == 0)
		return (0);
	while (*src != '\0')
	{
		*newstring = *src;
		newstring++;
		src++;
	}
	*newstring = '\0';
	return (result);
}
/*
int main()
{
	char	src[]= "Ce soir c'est LEC pour Karmine";
	char	*duplicate = ft_strdup(src);

	printf ("%s\n", duplicate);
	free (duplicate);
	return (0);
}
*/