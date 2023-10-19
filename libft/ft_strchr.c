/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:53:11 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 12:57:03 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
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
/*
int main()
{
    const char *str = "Bonjour le monde";
    char c = 'd';
    char *result1 = strchr(str, c);
    char *result2 = ft_strchr(str, c);

    printf("%c est a la %ld eme position\n", c, result1 - str);
    printf("%c est a la %ld eme position\n", c, result2 - str);
}
*/
