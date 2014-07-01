/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:50:31 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:39:42 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;

	if (!s)
	{
		write(1, "(NULL)", 6);
		return ;
	}
	i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
}
