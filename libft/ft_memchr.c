/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:21:29 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 13:32:09 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	const unsigned char	*memb;
	unsigned char		s;

	*memb = memoryBlock;
	s = searchedChar;
	while (size != 0)
	{
		if (*memB == s)
			return ((void *)memB);
		memB++;
	}
	return (0);
}
