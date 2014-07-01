/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 22:12:33 by tseguier          #+#    #+#             */
/*   Updated: 2014/06/17 17:52:31 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_btree.h"

void	ft_putbtree_node(t_btree tree, int depth, void (*putfunc)(void *))
{
	int		i;

	i = -1;
	if (!tree)
		return ;
	while (++i < depth)
		ft_putstr("|\t");
	ft_putstr("H---> ");
	ft_putnbr(tree->flag);
	ft_putstr(" : ");
	(*putfunc)(tree->content);
	ft_putbtree_node(tree->lson, depth + 1, putfunc);
	ft_putbtree_node(tree->rson, depth + 1, putfunc);
}

void	ft_putbtree(t_btree tree, void (*putfunc)(void *))
{
	ft_putendl("tree:");
	ft_putbtree_node(tree, 0, putfunc);
}
