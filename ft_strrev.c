/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 02:34:51 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:42:24 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strrev(char *str)
{
	size_t		start_i;
	size_t		end_i;
	char		tmp;

	start_i = 0;
	if (!str)
		return (-1);
	end_i = ft_strlen(str);
	if (end_i < 2)
		return (0);
	--end_i;
	while (start_i < end_i)
	{
		tmp = *(str + end_i);
		*(str + end_i) = *(str + start_i);
		*(str + start_i) = tmp;
		--end_i;
		++start_i;
	}
	return (0);
}

int		ft_memrev(void *mem, size_t len)
{
	size_t		start_i;
	char		tmp;

	start_i = 0;
	if (!((char *)mem))
		return (-1);
	if (len < 2)
		return (0);
	--len;
	while (start_i < len)
	{
		tmp = *(((char *)mem) + len);
		*(((char *)mem) + len) = *(((char *)mem) + start_i);
		*(((char *)mem) + start_i) = tmp;
		--len;
		++start_i;
	}
	return (0);
}
