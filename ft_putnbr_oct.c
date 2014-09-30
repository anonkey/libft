/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbroct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 04:33:12 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:35:47 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*g_octbase = "01234567";

int		ft_putnbr_oct(unsigned long long nb, unsigned int len)
{
	char	nb_act;
	int	size;

	size = 1;
	nb_act = nb % 8;
	if (nb >= 8)
		size += ft_putnbr_oct(nb / 8, len > 0 ? len - 1 : 0);
	else if (len > 0)
	{
		size += len - 1;
		while (--len > 0)
		    ft_putchar('0');
	}
	ft_putchar(g_octbase[(int)nb_act]);
	return (size);
}
