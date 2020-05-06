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

#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*cs1;
	unsigned const char	*cs2;
	size_t				i;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned const char *)s2;
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

int main (void)
{
	char a1[] = "\200";
	char a2[] = "\0";
	char d1 [] = "atoms\0\0\0\0";
	char d2 [] = "atoms\0abc";
	char f1 [] = "\x12\xff\x65\x12\xbd\xde\xad";
	char f2 [] = "\x12\x02";
	char h1 [] = "";
	char h2 [] = "AAAAAA";
	int a, b, d, e, f, g, h, i;

	a = strncmp(a1, a2, 1);		
	printf("\n The Comparison strncmp of str1 and str2 Strings = %d", a);
	b = ft_strncmp(a1, a2, 1);		
	printf("\n The Comparison ft_strmcmp of str1 and str2 Strings = %d\n", b);
		
	d = strncmp(d1, d2, 8);		
	printf("\n The Comparison strncmp of s1 and s2 Strings = %d", d);
	e = ft_strncmp(d1, d2, 8);		
	printf("\n The Comparison ft_strncmp of s1 and s2 Strings = %d\n", e);

	f = strncmp(f1, f2, 6);		
	printf("\n The Comparison strncmp of s1 and s2 Strings = %d", f);
	g = ft_strncmp(f1, f2, 6);		
	printf("\n The Comparison ft_strncmp of s1 and s2 Strings = %d\n", g);	

	h = strncmp(h1, h2, 6);		
	printf("\n The Comparison strncmp of s1 and s2 Strings = %d", h);
	i = ft_strncmp(h1, h2, 6);		
	printf("\n The Comparison ft_strncmp of s1 and s2 Strings = %d\n", i);

	return (0);
}
