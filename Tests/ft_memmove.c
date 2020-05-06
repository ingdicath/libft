/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:04:26 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/04 10:06:03 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;

	if (((unsigned char *)dst) == NULL && ((unsigned char *)src) == NULL)
		return (NULL);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return ((unsigned char *)dst);
}

int main(void)
{
	char destination[90] = "";
	//char origin[] = NULL;
	char origin[] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	printf("Before memmove, destination: %s\n", destination);
	memmove(destination, origin, sizeof(origin));
	printf("After memmove, destination: %s\n", destination);

	char dd[90] = "";
	//char oo[] = NULL;
	char oo[] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	printf("Before ft_memmove, destination: %s\n", dd);
	ft_memmove(dd, oo, sizeof(oo));
	printf("After ft_memmove, destination: %s\n", dd);

	return (0);
}