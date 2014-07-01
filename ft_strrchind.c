/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 03:22:51 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:40:34 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strrchind(const char *str, char c)
{
	size_t		i;

	if (!str)
		return (-2);
	i = ft_strlen(str);
	if (i == 0)
		return (-1);
	while (*(str + i) != c && i != 0)
		--i;
	return (i);
}
