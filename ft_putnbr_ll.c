#include "libft.h"
#include <limits.h>

int	ft_putnbr_ll(long long nbr)
{
	char		digit;
	unsigned long	size;

// long max
	if (nbr < 0)
	{
	    ft_putchar('-');
	    nbr = 0 - nbr;
	}
	digit = (char)(nbr % 10);
	if (nbr >= 10)
		size = ft_putnbr_ll(nbr / 10);
	else
		size = 1;
	ft_putchar('0' + digit);
	return (size);
}
