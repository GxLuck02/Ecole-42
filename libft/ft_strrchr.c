/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:57:41 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 13:01:13 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strrchr(const char	*string, int searchChar)
{
	const char	*lastocurrence;

	lastocurrence = 0;
	while (*string != '\0')
	{
		if (*string == searchChar)
			lastocurrence = string;
		string++;
	}
	return ((char *)lastocurrence);
}
/*
int main()
{
    const char *str = "Bonjour le monde";
    char c = 'o';
    char *result1 = strrchr(str, c);
    char *result2 = ft_strrchr(str, c);

    printf("%c est a la %ld eme position\n", c, result1 - str);
    printf("%c est a la %ld eme position\n", c, result2 - str);
}
*/
