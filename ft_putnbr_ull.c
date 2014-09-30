#include "libft.h"
#include <limits.h>

int		ft_putnbr_ull(unsigned long long nbr)
{
	unsigned long	size;
	char		strout[MAX_ULLSIZE + 1];
	char		*act;

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
	return (ft_putstr(act));
}
