/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:36:27 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 15:15:09 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	int	result;

	while (size > 0)
	{
		if (*(unsigned char *)str1 != *(unsigned char *)str2)
			result = (*(unsigned char *)str1) - (*(unsigned char *)str2);
		str1++;
		str2++;
		size--;
	}
	return (result);
}
/*
int main()
{
    char str1[]= "Le chat noir";
    char str2[]= "Le chat blanc";
    size_t size = 12;
    if ((ft_memcmp(str1, str2, size)) > 0)
        printf("Str 1 superieur a str2\n");
    else if ((ft_memcmp(str1, str2, size) < 0))
        printf("str1 est plsu petit que str2\n");
    else
        printf("les %zu octect sont identique\n", size);
    return (0);
}
*/
