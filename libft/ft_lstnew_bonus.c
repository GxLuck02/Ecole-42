/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:22:38 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/30 15:22:38 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc (sizeof (*new));
	if (new == 0)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int main(void)
{
	// Création d'un nouvel élément de liste
	int data = 42; // Exemple de donnée, peut être n'importe quel type
	t_list *new_element = ft_lstnew(&data);

	if (new_element != NULL)
	{
		printf("Contenu de l'élément : %d\n", *((int *)new_element->content));

		// Libérer la mémoire allouée
		free(new_element);
	}
	else
	{
		printf("Erreur lors de la création de l'élément.\n");
	}

	return 0;
}
 */