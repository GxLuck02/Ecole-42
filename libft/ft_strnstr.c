/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:16 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 13:55:36 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
*/
char	*ft_strnstr(const char *string, const char *needle, size_t len)
{
	const char	*temp_string;
	const char	*temp_needle;

	temp_string = string;
	temp_needle = needle;
	while (*string != '\0' && len > 0)
	{
		temp_string = string;
		temp_needle = needle;
		while (*temp_string == *temp_needle && *temp_needle != '\0')
		{
			temp_string++;
			temp_needle++;
			len--;
		}
		if (*temp_needle == '\0')
			return ((char *)string);
		string++;
		len--;
	}
	return (0);
}
