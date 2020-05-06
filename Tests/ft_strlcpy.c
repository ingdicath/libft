/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 11:06:17 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/20 11:06:18 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	if (!dst)
		return (0);
	while (src[size] != '\0')
		size++;
	if (!dstsize)
		return (size);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}

int main (void)
{
	char a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char b[] = "lunch";
	//char buff1[0xF00];
	//char buff2[0xF00];

	char aa[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char bb[] = "lunch";
	
	strlcpy(a, b, sizeof(a));
	printf("Using strlcpy: %s\n", a);

	strlcpy(aa, bb, sizeof(aa));
	printf("Using ft_strlcpy: %s\n", aa);
	return (0);
}
