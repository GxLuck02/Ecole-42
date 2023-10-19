/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:46 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 15:04:59 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
*/
int	ft_atoi(const char	*string)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*string >= 9 && *string <= 13) || *string == 32)
	{
		string++;
	}
	if (*string == '-')
	{
		sign = -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		result = (result * 10 + (*string - 48));
		string++;
	}
	return (sign * result);
}
/*
int main() {
    char str[] = "  -12345";
    int num;
    int num2;

    num = atoi(str);
    num2 = ft_atoi(str);
    printf("La valeur entiere est : %d\n", num);
    printf("La valeur entiere est : %d\n", num2);
    return (0);
}
*/
