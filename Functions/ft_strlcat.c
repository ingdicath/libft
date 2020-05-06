/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 15:15:40 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/20 15:15:41 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while ((dest_len < dstsize) && dst[dest_len])
		dest_len++;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	dstsize--;
	while (dstsize - dest_len && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
		dstsize--;
	}
	dst[dest_len + i] = '\0';
	return (src_len + dest_len);
}
