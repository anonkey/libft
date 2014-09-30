/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 22:01:23 by tseguier          #+#    #+#             */
/*   Updated: 2014/10/01 01:48:42 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers/libft.h"
#include <limits.h>


int		ft_putnbr_len(long long nbr, int len, char fill, int sign)
{
	int		pow;
	unsigned long	size;

	size = 1;
	pow = 10;
	while (nbr / pow != 0)
	{
		++size;
		pow *= 10;
	}
	if (nbr < 0 || sign)
	{
		++size;
		ft_putchar(nbr < 0 ? '-' : '+');
		nbr = nbr > 0 ? nbr : 0 - nbr;
	}
	while ((unsigned long)len > size++)
		ft_putchar(fill);
	ft_putnbr_ll(nbr, 0);
	return (len);
}
