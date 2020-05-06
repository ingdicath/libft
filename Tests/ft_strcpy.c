/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 11:21:18 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/25 11:22:31 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dst, char const *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char a[50] = "pollo malo";
	char b[50] = "tiene que estudiar";
	char *c;
	/*c = strcpy(a,b);
	printf("Answer is: %s", c);*/
	c = ft_strcpy(a,b);
	printf("Answer is: %s", c);
}
