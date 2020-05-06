/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:00:22 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/12 15:53:26 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*cs1;
	const unsigned char	*cs2;
	size_t				i;

	cs1 = (unsigned char *)s1;
	cs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] == '\0' || (cs1[i] - cs2[i]) != 0)
			return (cs1[i] - cs2[i]);
		else
			i++;
	}
	return (0);
}
