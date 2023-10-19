/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:20:30 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 18:20:30 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*newstring;
	char	*result;

	newstring = malloc(ft_strlen(s1 +1) * sizeof (char));
	result = newstring;
	if (newstring == 0)
		return (0);
	while (*s1 != '\0')
	{
		if (ft_strchr(set, *s1) == 0)
		{
			*newstring = *s1;
			newstring++;
		}
		s1++;
	}
	*newstring = '\0';
	return (result);
}
/*
int main()
{
	char	string[]= "Blue Blue, Blue !";
	char	set[]= ",!B";

	char	*final= ft_strtrim(string, set);
	printf("%s\n", final);

	free(final);
	return (0);
}
 */