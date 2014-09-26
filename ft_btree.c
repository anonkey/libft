/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 22:12:16 by tseguier          #+#    #+#             */
/*   Updated: 2014/06/17 22:13:26 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"
#include "libft.h"

t_btree		ft_btreenew(t_btree fath, void *c, int flag)
{
	t_btree		newbtree;

	newbtree = (t_btree)ft_memalloc(sizeof(struct s_btree));
	if (!newbtree)
		return (NULL);
	newbtree->content = c;
	newbtree->flag = flag;
	newbtree->fath = fath;
	newbtree->rson = NULL;
	newbtree->lson = NULL;
	return (newbtree);
}

void		ft_btreeflush(t_btree *btree_p, void (*del)(void **))
{
	if (!btree_p || !*btree_p)
		return ;
	if (del && ((*btree_p)->content))
		del(&((*btree_p)->content));
	ft_btreeflush(&((*btree_p)->rson), del);
	ft_btreeflush(&((*btree_p)->lson), del);
	ft_memdel((void **)btree_p);
}

void		ft_btreedel(t_btree *btree_p, void (*del)(void **))
{
	if (!btree_p || !*btree_p)
		return ;
	ft_btreeflush(btree_p, del);
	*btree_p = NULL;
}

int			ft_btree_nodeadd(t_btree tree, t_btree son, int atright)
{
	if (!tree || !son)
		return (-1);
	if ((atright && tree->rson) || (!atright && tree->lson))
		return (-2);
	son->fath = tree;
	if (atright)
		tree->rson = son;
	else
		tree->lson = son;
	return (0);
}
