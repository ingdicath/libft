/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 11:51:26 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/31 16:34:17 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;

	dest = b;
	while (len > 0)
	{
		*dest = (unsigned char)c;
		dest++;
		len--;
	}
	return (b);
}
