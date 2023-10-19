/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:03:01 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 13:18:45 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(const char *first, const char *second, size_t len)
{
	int	result;

	result = 0;
	while (*first == *second && len > 0)
	{
		if (*first == '\0')
			return (0);
		first++;
		second++;
		len--;
	}
	if (len > 0)
		result = *first - *second;
	return (result);
}
/*
int main()
{
    const char  first[]= "Le chat nlanc";
    const char  second[]= "Le chat boir";
    int result2 = ft_strncmp(first, second, 9);

    if (result2< 0)
        printf("%s est inférieure à %s\n", first, second);
    else if (result2== 0)
        printf("%s est égale à %s\n", first,second);
    else
        printf("%s est supérieure à %s\n", first,second);
}
*/
