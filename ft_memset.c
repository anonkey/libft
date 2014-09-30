/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:41:25 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/02 15:29:40 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		ft_charmemset(unsigned char *b, unsigned char c, size_t len)
{
	while (len > 0 && b)
	{
		--len;
		*(b + len) = c;
	}
}

void			*ft_memset(void *b, int c, size_t len)
{
	if (len > 0 && b)
		ft_charmemset((unsigned char *)b, (unsigned char)c, len);
	return (b);
}
