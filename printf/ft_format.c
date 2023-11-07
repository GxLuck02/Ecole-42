/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:46:23 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/06 15:49:23 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_format(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		length += ft_printstring(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		length += ft_printnbr(va_arg(args, int));
	/*else if (format == 'p')
		length += ft_printptr(va_arg(args, void*));
	else if (format == 'x' || format == 'X')
		length += ft_printHex(va_arg(args,unsigned int), format);*/
	else if (format == 'u')
		length += ft_printunsnbr(va_arg(args, unsigned int));
	else if (format == '%')
		length += ft_printpercent();
	return (length);
}
