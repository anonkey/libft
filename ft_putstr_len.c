/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:50:31 by tseguier          #+#    #+#             */
/*   Updated: 2014/07/06 14:18:33 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_putstr_len(char const *s, unsigned long len)
{
    unsigned long   size;
	if (!s)
		return (write(1, "(NULL)", 6 > len ? len : 6));
	size = ft_strlen(s);
	    return (write(1, s, size > len ? len : size));
}
