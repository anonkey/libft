/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 22:01:23 by tseguier          #+#    #+#             */
/*   Updated: 2014/09/25 22:33:56 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers/libft.h"
#include <limits.h>

int		ft_putnbr_len(long long nbr, int len, char fill)
{
	int				pow;
	unsigned long	size;

	size = 1;
	pow = 10;
	while (nbr / pow != 0)
	{
		++size;
		pow *= 10;
	}
	if (nbr < 0)
		++size;
	while ((unsigned long)len > size++)
		ft_putchar(fill);
	ft_putnbr_ll(nbr);
	return (0);
}
