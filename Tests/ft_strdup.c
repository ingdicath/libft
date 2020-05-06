/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 15:44:42 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/13 15:44:44 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char *str;
	int i;
	int size;
	
	size = 0;
	i = 0;
	while (s1[size] != '\0')
		size++;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (void)
{

	char *p1 = "Pollo malo";
	char *p2;
	char *q2;
	p2 = strdup(p1);
	printf("Duplicated string with strdup is: %s\n", p2);
	q2 = ft_strdup(p1);
	printf("Duplicated string with ft_strdup is %s\n", q2);

	return (0);
}
