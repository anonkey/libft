/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldcd_cellnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 01:23:50 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/01 19:15:28 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_ldcd_cell.h"

t_ldcd_cell		ft_ldcd_cellnew(void *elem, size_t elem_size)
{
	t_ldcd_cell		newcell;

	newcell = (t_ldcd_cell)malloc(sizeof(struct s_ldcd_cell));
	if (!newcell)
		return (NULL);
	if (!elem || elem_size == 0)
	{
		newcell->content = elem;
		newcell->content_size = 0;
	}
	else
	{
		newcell->content = ft_memalloc(elem_size);
		if (!newcell->content)
		{
			ft_memdel((void **)&newcell);
			return (NULL);
		}
		ft_bzero(newcell->content, content_size);
		newcell->content_size = elem_size;
		newcell->next = NULL;
		newcell->prev = NULL;
	}
	return (newcell);
}
