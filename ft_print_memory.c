/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 14:14:58 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:35:35 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*g_hexbase = "0123456789abcdef";

static void	ft_fill(int count, int space)
{
	while (count < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (space && count % space == space - 1)
			ft_putchar(' ');
		++count;
	}
}

static void	ft_putnstr(char *str, unsigned int len, int hex, int space)
{
	unsigned int	i;

	i = 0;
	while (len > i)
	{
		if (hex)
		{
			ft_putchar(g_hexbase[(int)((unsigned char)str[i] / 16)]);
			ft_putchar(g_hexbase[(int)((unsigned char)str[i] % 16)]);
		}
		else if (str[i] < 127 && str[i] >= 31)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		if (space && (int)i % space == space - 1)
			ft_putchar(' ');
		++i;
	}
	if (hex)
		ft_fill(i, space);
}

static void	ft_putline(char *addr, unsigned int offset, unsigned int size)
{
	ft_putnbrhex(offset, 8, 0);
	ft_putchar(':');
	ft_putchar('\t');
	ft_putnstr(addr + offset, size, 1, 2);
	ft_putchar('\t');
	ft_putnstr(addr + offset, size, 0, 0);
	ft_putchar('\n');
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		count;

	count = 0;
	while (size - 16 > count && size - 16 > 0)
	{
		ft_putline(addr, count, 16);
		count += 16;
	}
	if (size - count > 0)
		ft_putline(addr, count, size - count);
	return (addr);
}
