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
#include <string.h>
#include <stdio.h>

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


int main (void)
{
	size_t i;
	//size_t ii;
	char a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char b[] = "there is no stars in the sky";
	//char b[] = "hol\0a";
	i = strlcat(a, b, sizeof(a));
	//ii = ft_strlcat(a, b, sizeof(a));
	printf("Lenght string concatenate with strlcat is: %zu\n___________\n", i);
	//printf("Lenght string concatenate with ft_strlcat is: %zu\n", ii);
	
	/*char a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char b[] = "hol\0a";
	size_t k, l;
	k = ft_strlen(a);
	l = ft_strlen(b);	
	printf("Lenght of k is: %zu\n", k);
	printf("Lenght of k is: %zu\n", l);*/
	return (0);
}


// el que fallo

/*size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(dst) + ft_strlen(src);
	if (!dst && !src)
		return (0);
	while (src[i] != '\0')
		i++;
	if (!dstsize)
		return (size);
	dst[i] = '\0';
	return (size);
}*/