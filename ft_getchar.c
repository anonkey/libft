/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 02:58:56 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/01 19:09:21 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_getchar_fd(int fd)
{
	char	c;

	if (1 != read(fd, &c, 1))
		return (-1);
	return ((int)c);
}

int		ft_getchar(void)
{
	return (ft_getchar_fd(0));
}
