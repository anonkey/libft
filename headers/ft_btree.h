/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 22:12:07 by tseguier          #+#    #+#             */
/*   Updated: 2014/06/17 22:13:41 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree	*t_btree;

struct				s_btree
{
	int				flag;
	void			*content;
	t_btree			fath;
	t_btree			rson;
	t_btree			lson;
};

t_btree				ft_btreenew(t_btree fath, void *c, int flag);
void				ft_btreeflush(t_btree *btree, void (*del)(void**));
void				ft_btreedel(t_btree *btree_p, void (*del)(void**));
int					ft_btree_nodeadd(t_btree tree, t_btree son, int atright);
void				ft_putbtree_node(t_btree t, int d, void (*putfunc)(void*));
void				ft_putbtree(t_btree tree, void (*putfunc)(void*));

#endif
