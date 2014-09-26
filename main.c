/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/01 19:04:44 by tseguier          #+#    #+#             */
/*   Updated: 2014/09/25 22:33:40 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/libft.h"

int		ft_putnbr_len(long long nbr, int len, char fill);
int		main(void)
{
	long long		nb;

	nb = 123456789;
	ft_putnbr_len(nb, 5, '|');
	return (1);
}
