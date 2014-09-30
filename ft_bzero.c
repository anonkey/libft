/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 21:30:56 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/01 19:07:38 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	while (n > 0)
	{
		--n;
		*((char *)s + n) = '\0';
	}
}
