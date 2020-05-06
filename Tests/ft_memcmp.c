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

#include <string.h>
#include <stdio.h>

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

int main (void)

{
	char str1[] = "\xff\xaa\xde\xffMACOSX\xff";
	char str2[] = "\xff\xaa\xde\x02";
	char str3[] = "atoms\0\0\0\0";
	char str4[]	= "atoms\0abc";

	int ret, retnew, a, aa;
	
	ret = memcmp(str1, str2, 8);
	retnew = ft_memcmp(str1, str2, 8);
	a = memcmp(str3, str4, 8);
	aa = ft_memcmp(str3, str4, 8);

 	printf("Answer memcmp is %d\n ................\n", ret);
 	printf("Answer ft_memcmp is %d\n ................\n", retnew);
	printf("Answer memcmp is %d\n ................\n", a);
 	printf("Answer ft_memcmp is %d\n ................\n", aa);

	return(0);
}
