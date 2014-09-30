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

int	ft_putnbr_ll(long long nbr)
{
	char		digit;
	unsigned long	size;

// long max
	size = 1;
	if (nbr < 0)
	{
	    ++size;
	    ft_putchar('-');
	    nbr = 0 - nbr;
	}
	digit = (char)(nbr % 10);
	if (nbr >= 10)
		size += ft_putnbr_ll(nbr / 10);
	ft_putchar('0' + digit);
	return (size);
}
