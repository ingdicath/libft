/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/27 14:41:00 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/27 14:41:04 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*string;

	i = 0;
	if (s && f)
	{
		string = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		while (!string)
			return (NULL);
		while (s[i] != '\0')
		{
			string[i] = f(i, s[i]);
			i++;
		}
		string[i] = '\0';
		return (string);
	}
	return (NULL);
}

char	ft_whatever(unsigned int i, char c)
{
	char a;

	a = ((c - 48) * i / 10) + 48;
	return (a);
}

int main (void)
{
 	char const *chars = "129";
	printf("Answer is: %s\n", ft_strmapi(chars, ft_whatever));
	return (0);
}
