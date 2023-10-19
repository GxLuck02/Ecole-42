/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:43:40 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 15:17:04 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t nbroct)
{
	char		*chardest;
	const char	*charsrc;
	int			index;

	chardest = dest;
	charsrc = src;
	index = 0;
	if (charsrc == chardest || nbroct == 0)
		return (dest);
	if (((charsrc + 1) == chardest) || ((charsrc - 1) == chardest))
		return (dest);
	else
	{
		while (nbroct > 0 && charsrc[index] != '\0')
		{
			chardest[index] = charsrc[index];
			index++;
			nbroct--;
		}
	}
	return (dest);
}
/*
int main()
{
	char src[]= "Sang Bleu";
	char dest[10];

	ft_memmove(dest, src, 9);
	printf ("%s\n", dest);

	return (0);
}
*/
