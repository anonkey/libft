/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 23:29:17 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:39:16 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		--n;
		*(((unsigned char *)s1) + n) = *(((unsigned char *)s2) + n);
	}
	return (s1);
}
