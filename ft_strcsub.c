/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 01:06:12 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:40:00 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strcsub(char **dst, char *src, unsigned int start, char end)
{
	int		len;

	len = 0;
	if (!dst || !src)
	{
		*dst = NULL;
		return (-1);
	}
	while (src[len + start] && src[len + start] != end)
		++len;
	*dst = ft_strsub(src, start, len);
	return (len);
}
