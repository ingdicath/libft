/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 13:58:31 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/13 13:58:42 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = (unsigned char *)malloc(count * size);
	if (!str)
		return (NULL);
	while (i < (count * size))
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}
