/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 17:49:47 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/12 14:23:00 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tdst;
	const char	*tsrc;
	size_t		i;

	tdst = dst;
	tsrc = src;
	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
