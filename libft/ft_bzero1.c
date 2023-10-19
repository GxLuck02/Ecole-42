/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:06:46 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/12 14:30:20 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_bzero(void *ptr, size_t nbroct)
{
	int		index;
	char	*charptr;

	charptr = ptr;
	index = 0;
	while (nbroct != 0)
	{
		charptr[index] = 0;
		index++;
		nbroct--;
	}
}
