#include "libft.h"
#include <limits.h>

int	ft_putnbr_ull(unsigned long long nbr)
{
	char		digit;
	unsigned long	size;

	size = 1;
	digit = (char)(nbr % 10);
	if (nbr >= 10)
		size += ft_putnbr_ull(nbr / 10);
	ft_putchar('0' + digit);
	return (size);
}