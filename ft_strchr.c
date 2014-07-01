/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:46:29 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:39:48 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
		return ((char *)s);
	if (*s == '\0')
		return (NULL);
	return (ft_strchr(s + 1, c));
}
