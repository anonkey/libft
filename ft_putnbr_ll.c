/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 22:03:18 by tseguier          #+#    #+#             */
/*   Updated: 2014/09/25 22:03:20 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#define MAX_LLSIZE 64

int	ft_putnbr_ll(long long nbr, int sign)
{
	unsigned long	size;
	char		strout[MAX_LLSIZE + 1];
	char		*act;

// long max
	size = 1;
	act = strout + MAX_LLSIZE;
	*act-- = '\0';
	if (nbr < 0 || sign)
	{
	    ++size;
	    ft_putchar(nbr < 0 ? '-' : '+');
	    nbr = nbr > 0 ? nbr : 0 - nbr;
	}
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
