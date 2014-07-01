/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 01:44:02 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:39:46 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strchind(const char *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (-2);
	while (*(str + i) != c && *(str + i) != '\0')
		++i;
	return (*(str + i) != '\0' ? i : -1);
}
