/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 09:52:10 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/29 13:01:55 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

/*int main (void)
{
	int len;
	char *s = "Pajarito malo";
	len = strlen(s);
	printf("string length with strlen: %d \n", len);
	len = ft_strlen(s);
	printf("string length with ft_strlen: %d \n", len);
	return (0);
}*/