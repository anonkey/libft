/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 11:28:40 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:12:40 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(unsigned char *base)
{
	char	is_used[256];
	int		i;
	int		len;

	if ((len = ft_strlen((char *)base)) < 2)
		return (0);
	i = 0;
	while (i < 256)
	{
		*(is_used + i) = '\0';
		++i;
	}
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (is_used[(int)*base])
			return (0);
		is_used[(int)*base] = *base;
		++base;
	}
	return (len);
}

static void	ft_putbase(long nb, char *base, int baselen)
{
	char	digit;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	digit = base[nb % baselen];
	if (nb / baselen >= baselen)
		ft_putbase(nb / baselen, base, baselen);
	else
		ft_putchar(base[nb / baselen]);
	ft_putchar(digit);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		len;

	if (!(len = ft_check((unsigned char *)base)))
		return ;
	ft_putbase((long)nbr, base, len);
}
