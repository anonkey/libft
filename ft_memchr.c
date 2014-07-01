/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:28:09 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/01 19:27:53 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		--n;
		if (*((unsigned char *)s + n) == (unsigned char)c)
			return ((char *)s + n);
	}
	return (NULL);
}
