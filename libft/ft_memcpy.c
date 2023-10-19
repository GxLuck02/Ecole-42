/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:35:48 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/11 18:42:07 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t nbroct)
{
	int							index;
	char		*restrict		chardest;
	const char	*restrict		charsrc;

	chardest = dest;
	charsrc = src;
	index = 0;
	while (nbroct != 0)
	{
		chardest[index] = charsrc[index];
		index++;
		nbroct--;
	}
	return (dest);
}
