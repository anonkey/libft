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

void	ft_putnbr(int n)
{
	char	*nbstr;

	nbstr = ft_itoa(n);
	if (!nbstr)
		return ;
	ft_putstr(nbstr);
	ft_strdel(&nbstr);
}
