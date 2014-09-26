/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 04:33:12 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:35:47 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*g_hexbase = "0123456789abcdef";
static const char	*g_hexbase_maj = "0123456789ABCDEF";

int		ft_putnbrhex(unsigned long long nb, unsigned int len, int maj)
{
	char	nb_act;
	int	size;

	nb_act = nb % 16;
	size = 0;
	if (nb >= 16)
		size = ft_putnbrhex(nb / 16, len > 0 ? len - 1 : 0, maj);
	else if (len > 0)
	{
		size = len - 1;
		while (--len > 0)
		    ft_putchar('0');
	}
	if (maj)
		ft_putchar(g_hexbase_maj[(int)nb_act]);
	else
		ft_putchar(g_hexbase[(int)nb_act]);
	return (1 + size);
}
