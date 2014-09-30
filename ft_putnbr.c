/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:52:59 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/02 15:31:14 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	char	*nbstr;
	int	size;

	nbstr = ft_itoa(n);
	if (!nbstr)
		return (0);
	ft_putstr(nbstr);
	size = ft_strlen(nbstr);
	ft_strdel(&nbstr);
	return (size);
}
