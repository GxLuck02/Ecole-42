#include "libftprintf.h"

int len_Hex(unsigned int num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_putHex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_putHex(num / 16, format);
		ft_putHex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_printchar((int )num + '0');
		else
		{
			if (format == 'x')
				ft_printchar((int )num - 10 + 'a');
			if (format == 'X')
				ft_printchar((int )num - 10 + 'A');
		}
	}
}

int	ft_printHex(unsigned int c,const char format)
{
	if (c == 0)
	{
		write(1, "c", 1);
		return (1);
	}
	else
		ft_putHex(c, format);
	return(len_Hex(c));
}
