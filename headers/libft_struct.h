/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 19:13:32 by jcoignet          #+#    #+#             */
/*   Updated: 2014/03/27 19:29:02 by jcoignet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCT_H
# define LIBFT_STRUCT_H

typedef enum		e_bool
{
	false,
	true
}					t_bool;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct s_ldcd	*t_ldcd;

struct				s_ldcd
{
	t_ldcd_cell		head;
	t_ldcd_cell		tail;
	size_t			size;
};

#endif
