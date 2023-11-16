#include "get_next_line.h"

void	*ft_calloc(size_t nbrelement, size_t elementsize)
{
	void	*tableau_malloc;

	tableau_malloc = (void *)malloc(nbrelement * elementsize);
	if (tableau_malloc == 0)
		return (0);
	ft_bzero(tableau_malloc, nbrelement * elementsize);
	return (tableau_malloc);
}

void	ft_bzero(void *ptr, size_t nbroct)
{
	ft_memset(ptr, 0, nbroct);
}

void	*ft_memset(void *ptr, int value, size_t len)
{
	int		index;
	char	*charptr;

	charptr = ptr;
	index = 0;
	while (len != 0)
	{
		charptr[index] = (char)value;
		len --;
		index++;
	}
	return (ptr);
}