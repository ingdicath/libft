/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 16:59:12 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/15 16:59:15 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t				i;

	cs1 = (const unsigned char *)s1;
	cs2 = (const unsigned char *)s2;
	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (cs1[i] == '\0' && (cs1[i] - cs2[i]) != 0)
			return (cs1[i] - cs2[i]);
		else if (cs1[i] - cs2[i] != 0)
			return (cs1[i] - cs2[i]);
		else
			i++;
	}
	return (0);
}
