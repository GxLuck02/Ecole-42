/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:51 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/11 18:18:49 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	int		index;
	char	*charptr;

	charptr = ptr;
	index = 0;
	while (len != 0)
	{
		charptr[index] = (char)value;
		len --;
		index++;
	}
	return (ptr);
}
