/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:17:22 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 18:44:12 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdarg.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, s1);
	return (ft_strcat(newstr, s2));
}

char	*ft_strmjoin(int nbstr, ...)
{
	char	*newstr;
	va_list	list;
	char	*strings[nbstr];
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(list, nbstr);
	while (i < nbstr)
	{
		strings[i] = va_arg(list, char *);
		len += ft_strlen(strings[i]);
		++i;
	}
	newstr = ft_strnew(len + 1);
	i = 0;
	while (i < nbstr)
	{
		ft_strcat(newstr, strings[i]);
		++i;
	}
	va_end(list);
	return (newstr);
}

char	*ft_strmjoinclean(int nbstr, ...)
{
	char		*newstr;
	va_list		list;
	char		**strings[nbstr];
	int			i;
	size_t		totallen;

	i = 0;
	totallen = 0;
	va_start(list, nbstr);
	while (i < nbstr)
	{
		strings[i] = va_arg(list, char **);
		totallen += ft_strlen(*strings[i]);
		++i;
	}
	newstr = ft_strnew(totallen + 1);
	i = 0;
	while (i < nbstr)
	{
		ft_strcat(newstr, *strings[i]);
		ft_strdel(strings[i]);
		++i;
	}
	va_end(list);
	return (newstr);
}
