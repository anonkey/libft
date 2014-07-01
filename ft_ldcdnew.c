/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldcdnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 04:09:23 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:38:36 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_ldcd		ft_ldcdnew(void)
{
	t_ldcd		newldcd;

	newldcd = (t_ldcd)malloc(sizeof(struct s_ldcd));
	if (!newldcd)
		return (NULL);
	newldcd->size = 0;
	newldcd->head = NULL;
	newldcd->tail = NULL;
	return ((t_ldcd)newldcd);
}
