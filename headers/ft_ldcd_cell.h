/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldcd_cell.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <tseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 01:12:25 by tseguier          #+#    #+#             */
/*   Updated: 2014/03/27 19:27:38 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LDCD_CELL_H
# define FT_LDCD_CELL_H
# include <string.h>
typedef struct s_ldcd_cell	*t_ldcd_cell;

struct						s_ldcd_cell
{
	void				*content;
	size_t				content_size;
	t_ldcd_cell			prev;
	t_ldcd_cell			next;
};

t_ldcd_cell				ft_ldcd_cellnew(void *elem, size_t elem_size);
void					ft_ldcd_celldel(t_ldcd_cell *cell, void (*del)(void**));

#endif

