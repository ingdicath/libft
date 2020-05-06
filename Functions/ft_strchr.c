/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:44:07 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/29 15:36:59 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (c == '\0')
		return ((char *)s);
	else if (*s == '\0')
		return (NULL);
	else
		return ((char *)s);
}
