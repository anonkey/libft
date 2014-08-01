/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 13:32:16 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:39:22 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkbase(unsigned char *base)
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

static int	ft_checknbr(char *nb, char *base)
{
	if (*nb == '+' || *nb == '-')
		++nb;
	while (*nb)
	{
		if (!ft_strchr(base, *nb))
			return (-1);
		++nb;
	}
	return (0);
}

int			ft_atoi_base(char *str, char *base)
{
	int		len;
	int		sign;
	long	res;

	if (!(len = ft_checkbase((unsigned char *)base))
		|| (ft_checknbr(str, base)))
		return (0);
	res = 0;
	sign = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		++str;
	while (*str)
	{
		res *= len;
		res += ft_strchr(base, *str) - base;
		++str;
	}
	return (sign * (int)res);
}
