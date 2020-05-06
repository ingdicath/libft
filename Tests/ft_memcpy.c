/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 17:49:47 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/12 14:17:01 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tdst;
	const char	*tsrc;
	size_t		i;

	tdst = dst;
	tsrc = src;
	i = 0;
	
	if ( n == 0 || dst == src)
		return (dst);	
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}

int main (void)
{
	/*char destin[] = "pollo malo malo";
	char origin[] = "Boston 2020";
	printf("destin = %s\n", destin);
	printf("origin = %s\n", origin);
	memcpy(destin, origin, sizeof(destin));
	printf("After memcpy destin: %s\n", destin);*/

	char destin[] = "";
	char origin[] = "";
	printf("destin = %s\n", destin);
	printf("origin = %s\n", origin);
	ft_memcpy(destin, origin, sizeof(origin)); //In 3 parameter it's possible define with a specific number
	printf("After ft_memcpy destin: %s\n", destin);
	
	return (0);
}
