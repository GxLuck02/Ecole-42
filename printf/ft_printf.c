/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:44:55 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/06 14:47:10 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include <stdio.h>

int ft_printf(const char *start, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, start);
	while(*start != '\0')
	{
		if (*start == '%')
		{
			length += ft_format(args, (*(++start)));
			start++;
		}
		else
			length += ft_printchar(*start);
		start++;
	}
	va_end(args);
	printf("\nLe nombre de caractere imprimer est de %d\n", length);
	return (length);
}

int main()
{
	char *c = "Theo";
	int b;

	ft_printf("Mon nom est %s", c);
	b = printf("Mon nom est %s", c);
	printf("\nLe nombre de caractere imprimer est de %d\n", b);
	return 0;
}