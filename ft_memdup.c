/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 20:20:51 by tseguier          #+#    #+#             */
/*   Updated: 2014/04/19 02:41:28 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memdup(void *mem, size_t len)
{
	void	*newmem;
	size_t	i;

	if (!mem)
		return (NULL);
	i = 0;
	newmem = malloc(len);
	if (!newmem)
		return (NULL);
	while (i < len)
	{
		*((char *)(newmem + i)) = *((char *)(mem + i));
		++i;
	}
	return (newmem);
}
