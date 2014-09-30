/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:08:39 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/02 15:30:24 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (fd < 0)
		return ;
	if (s)
		ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
