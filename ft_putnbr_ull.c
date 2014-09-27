#include "libft.h"
#include <limits.h>
#define MAX_ULLSIZE 64

int	ft_putnbr_ull(unsigned long long nbr)
{
	unsigned long	size;
	char		strout[MAX_ULLSIZE + 1];
	char		*act;

// long max
	size = 1;
	act = strout + MAX_ULLSIZE;
	*act-- = '\0';
	while (nbr >= 10)
	{
		*act = '0' + (char)(nbr % 10);
		--act;
		++size;
		nbr /= 10;
	}
	*act = '0' + nbr;
	ft_putstr(act);
	return (size);
}
