/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iswhitespace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 15:51:57 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/18 15:51:58 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(int c)
{
	c = (unsigned char)c;
	if (c != '\0' && (c == ' ' || c == '\t' || c == '\v' ||
		c == '\f' || c == '\r' || c == '\n'))
		return (1);
	return (0);
}
