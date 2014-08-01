/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_macrolib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 04:41:25 by tseguier          #+#    #+#             */
/*   Updated: 2014/08/01 04:41:31 by tseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MACROLIB_H
# define FT_MACROLIB_H

# define IFTRUE(x, y, z) ((x) ? (y) : (z))
# define IFFALSE(x, y, z) (!(x) ? (y) : (z))
# define MIN(a, b) ((a) < (b) ? (a) : (b))
# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define MINORE(a, b) ((a) <= (b) ? (a) : (b))
# define ABS(a) ((a) > 0 ? (a) : 0 - (a))
# define MAXORE(a, b) ((a) >= (b) ? (a) : (b))
# define ISDIV(a, b) (((a) % (b)) == 0 ? TRUE : FALSE)
# define TRACE(a) (printf("\n %s %s %s\n",__FILE__,__LINE__,(a)))

#endif
