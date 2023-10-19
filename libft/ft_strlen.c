/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:45:28 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/11 18:05:04 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *word)
{
	int	index;
	int	nbrchar;

	nbrchar = 0;
	index = 0;
	while (word[index] != '\0')
	{
		index++;
		nbrchar++;
	}
	return (nbrchar);
}
