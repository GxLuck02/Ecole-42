#include "get_next_line.h"

void	*ft_calloc(size_t nbrelement, size_t elementsize)
{
	void	*tableau_malloc;
	int		index;
	char	*charptr;

	index = 0;
	tableau_malloc = (void *)malloc(nbrelement * elementsize);
	if (tableau_malloc == 0)
		return (0);
	charptr = tableau_malloc;
	while (nbrelement != 0)
	{
		charptr[index] = (char)0;
		nbrelement --;
		index++;
	}
	return (tableau_malloc);
}

char	*ft_strdup(const char *src)
{
	char	*newstring;
	char	*result;

	newstring = malloc((ft_strlen(src) + 1) * sizeof(char));
	result = newstring;
	if (newstring == 0)
		return (0);
	while (*src != '\0')
	{
		*newstring = *src;
		newstring++;
		src++;
	}
	*newstring = '\0';
	return (result);
}

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

void	dellist(t_list **list)
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *list;
	while (current_node != NULL)
	{
		free(current_node->storage);
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}