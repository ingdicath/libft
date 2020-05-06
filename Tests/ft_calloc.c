/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 13:58:31 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/13 13:58:42 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void		*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = (unsigned char *)malloc(count * size);
	if (!str)
		return (NULL);
	while (i < (count * size))
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}


	//ft_bzero(ptr, size * count);
	//return (ptr);



int main (void)
{
	int *x;
	int n;
	n = 6;
	printf("Enter number of elements: %d\n", n);
	x = (int *)calloc(n, sizeof(int));
	if(x == NULL)
	{
		printf("Memory not allocated - calloc.\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated using calloc is %lu\n", n*sizeof(int));
		free(x);
		printf("Calloc memory freed\n______________________\n");
	}

	int *y;
	int m;
	m = 6;
	printf("Enter number of elements: %d\n", m);
	y = (int *)ft_calloc(m, sizeof(int));
	if(y == NULL)
	{
		printf("Memory not allocated - ft_calloc.\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated using ft_calloc is %lu\n", m*sizeof(int));
		free(y);
		printf("ft_calloc memory freed\n");
	}
	return (0);
}

/* la que estaba en la carpeta de test
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = (unsigned char *)malloc(count * size);
	if (res == NULL)
		return (NULL);
	while (i <= count)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return ((void *)res);
}*/

//____________________________________________________


/*void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*res;

	i = 0;
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	while (i <= count)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}*/

//______________________________________________________


// la que funciono
/*void	*ft_calloc(size_t count, size_t size)
{
	void *str;
	size_t i;

	i = 0;
	str = (unsigned char *)malloc(count * size);
	if (str == NULL)
		return (str);
	while (i < (count * size))
	{
		((char *)str)[i] = '\0';
		i++;
	}
	return (str);
}*/