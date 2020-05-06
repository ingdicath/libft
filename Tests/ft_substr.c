/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 11:19:03 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/20 11:19:05 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
		return (ft_strdup(""));
	if (length - start < len)
		len = length - start;
	string = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		string[i] = s[start];
		start++;
		i++;
	}
	string[i] = '\0';
	return (string);
}


int main (void)
{
	char const str[] = "pollo malo";
	printf("Substr is: %s\n", ft_substr(str, 2, 5));
	return (0);
}
