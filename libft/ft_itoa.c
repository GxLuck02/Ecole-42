/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:09:50 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/20 15:10:19 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

size_t  nbrdigit(int n)
{
    size_t  digit;

    digit = 1;
    while (n /= 10)
    {
        digit++;
    }
    return (digit);
}

static char	*transfo(char	*dest, long int 	src, size_t	len)
{
	long int	a;
	size_t		templen;

	templen = len;
	dest[len] = '\0';
	if (src == INT_MIN)
	{
		a = src;
		src = INT_MAX;
	}
	while (len--)
	{
		*(dest + len) = src % 10 + '0';
		src = src / 10;
	}
	if (a == INT_MIN)
		dest[templen - 1] = '8';
	return (dest);
}

char    *ft_itoa(int n)
{
    char       	*result;
    size_t     	digit;
     long int   num;

	digit = nbrdigit(n);
	num = n;
    if (n < 0)
	{
		num *= -1;
        digit++;
    }
    if (!(result = (char *)malloc((digit + 1) * sizeof(char))))
        return (0);
	transfo(result, num, digit);
    if (n < 0)
        result[0] = '-';
    return (result);
}

int main()
{
	int num = INT_MAX;
	char *str_num = ft_itoa(num);
	printf("Le nombre est : %s\n", str_num);
	free(str_num);
	return 0;
}