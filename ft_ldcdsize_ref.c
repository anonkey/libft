/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldcdsize_ref.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 07:37:30 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:38:52 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ldcdsize_ref(t_ldcd list)
{
	t_ldcd_cell		iter;
	size_t			len;

	len = 0;
	if (!list)
		return ;
	iter = list->head;
	if (!iter)
		return ;
	while (iter->prev)
		iter = iter->prev;
	list->head = iter;
	++len;
	while (iter->next)
	{
		++len;
		iter = iter->next;
	}
	list->size = len;
	list->tail = iter;
}
