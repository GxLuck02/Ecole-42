/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:54:26 by ttreichl          #+#    #+#             */
/*   Updated: 2023/11/06 16:54:30 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int ft_printstring(const char *string)
{
	int	length;

	length = 0;
	while (*string != '\0')
	{
		length += ft_printchar(*string);
		string++;
	}
	return (length);
}
