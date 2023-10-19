/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:37:18 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/13 16:45:02 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char	*dest, const char	*src, size_t size)
{
	size_t	index1;
	size_t	index2;
	size_t	result;

	result = 0;
	index1 = 0;
	index2 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (index1 < size && src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
		result++;
	}
	dest[index1] = '\0';
	return (result + 1);
}
/*
int main()
{
	char	dest[20]= "hello ";
	char	src[]= "Theo";

	printf("Dest : %s\n", dest);
	printf("Source : %s\n", src);
	printf("Nombre caractere copier : %zu\n",ft_strlcat(dest, src, 9));
	printf("New Dest : %s\n", dest);

	return (0);
}
*/