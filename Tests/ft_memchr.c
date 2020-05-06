/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 16:50:43 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/18 16:50:45 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*cs == ((unsigned char)c))
			return (cs);
		cs++;
		i++;
	}
	return (NULL);
}

int main (void)
{
	const char str[] = "/|\x12\xff\x09\x42\2002\42|\\";
	const char ch = '\200';
	//const char str[] = "boston marathondfasdfadfasrewasdfaee16546";
	//const char ch = 't';

	char *res, *rr;

	res = memchr(str, ch, 10);
	printf("String memchr after |%c| is - |%s|\n_________________________________\n", ch, res);
	rr = ft_memchr(str, ch, 10);
	printf("String ft_memchr after |%c| is - |%s|\n", ch, rr);
	return (0);
}
