/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 06:03:41 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:40:48 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtabdel(char ***strtab)
{
	int		i;

	i = 0;
	if (!strtab || !*strtab)
		return ;
	while ((*strtab)[i])
	{
		ft_strdel(&((*strtab)[i]));
		++i;
	}
	ft_memdel((void **)strtab);
}
