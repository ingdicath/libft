/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 16:38:22 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/31 17:42:47 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

int main(void)
{
	/*char str[] = "I am going to run Boston Maraton in 2020";
	printf("Before bzero(): %s\n", str);
	bzero(str + 13, 4);
	printf("After bzero() : %s\n", str);*/

	char str[] = "I am going to run Boston Maraton in 2020";
	printf("Before ft_bzero(): %s\n", str);
	ft_bzero(str + 13, 4);
	printf("After ft_bzero() : %s\n", str);
	
	return (0);
}
