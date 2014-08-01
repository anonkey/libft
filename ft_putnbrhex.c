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

const char	*g_hexbase = "0123456789abcdef";

void		ft_putnbrhex(unsigned int nb, unsigned int len)
{
	char	nb_act;

	nb_act = nb % 16;
	if (nb >= 16)
		ft_putnbrhex(nb / 16, len + 1);
	else
	{
		while (len++ < 8)
			ft_putchar('0');
	}
	ft_putchar(g_hexbase[(int)nb_act]);
}
