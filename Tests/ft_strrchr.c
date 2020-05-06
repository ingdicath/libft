/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:50:20 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/14 11:50:22 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char		*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

int main (void)
{
	char *string = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//char string[] = "een kopje koffie";
	char *p;
	char *pe;
	p = strrchr (string,'\0');
	pe = ft_strrchr (string,'\0');
	printf("After strrchr: %s\n________________________\n", p);
	printf("After ft_strrchr: %s\n", pe);
	return (0);
}
