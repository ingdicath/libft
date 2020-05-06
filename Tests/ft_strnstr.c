/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:41:46 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/05 15:41:48 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char		*ft_strnstr(const char *haystack, const	char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while(haystack[i] != '\0' && i < len)
	{
		j = 0;
		while(needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}


int main()
{
	const char *largestring = "lorem ipsum dolor sit amet";
	const char *smallstring = "ipsumm";
	//const char *largestring = "Foo Bar Baz";
	//const char *smallstring = "Bar";
	/*char *ptr;
	ptr = strnstr(largestring, smallstring, 30);
	printf("Answer with strnstr is: %s\n", ptr);
	return (0);*/

	char *ss;
	ss = ft_strnstr(largestring, smallstring, 30);
	printf("Answer with ft_strnstr is: %s\n", ss);
	return (0);
}
