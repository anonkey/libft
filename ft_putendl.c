/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:54:55 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:39:35 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_putendl(char const *s)
{
    int	    len;
	len = ft_putstr(s);
	return (len + write(1, "\n", 1));
}
