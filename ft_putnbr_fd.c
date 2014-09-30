/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:08:02 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/02 15:31:58 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbstr;

	if (fd < 0)
		return ;
	nbstr = ft_itoa(n);
	if (!nbstr)
		return ;
	ft_putstr_fd(nbstr, fd);
	ft_strdel(&nbstr);
}
