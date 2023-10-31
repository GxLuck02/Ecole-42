/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:55:56 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/31 16:55:56 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int	i;

	i = 0;
	if (lst != NULL && del != NULL)
	{
		while (lst[i]->next != 0)
			(del)(lst[i]->content);
		free (lst);
		lst = NULL;
	}
}
