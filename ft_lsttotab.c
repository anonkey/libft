/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttotab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/26 18:17:43 by tseguier          #+#    #+#             */
/*   Updated: 2014/06/26 18:33:49 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_lsttotab(t_ldcd l)
{
	char		**tab;
	int			size;
	t_ldcd_cell	iter;

	if (!l)
		return (NULL);
	size = ft_ldcdsize(l);
	tab = (char **)ft_memalloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size] = NULL;
	iter = l->tail;
	while (iter)
	{
		tab[--size] = iter->content;
		iter = iter->prev;
	}
	return (tab);
}
