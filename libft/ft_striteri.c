/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:25:58 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/23 19:25:59 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, s);
		index++;
	}
}
/*
static void	my_fonction(unsigned int index, char *adressechar)
{
	adressechar[index] = adressechar[index] - 32;
}

int main ()
{
	char	string[] = "silteplait";

	ft_striteri(string, my_fonction);
	printf("%s\n", string);
	return (0);
}
*/