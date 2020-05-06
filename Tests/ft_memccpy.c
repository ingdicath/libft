/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 15:02:45 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/12 15:17:02 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == c)
			return (cdst + i + 1);
		i++;
	}
	return (NULL);
}

int main (void)
{
	char dest[] = "abcdefghijklmnopqrstuvwxyz";
	char orig[]= "string with\200inside !";
	printf("Destination: %s\n", dest);
	memccpy(dest, orig, 0600, 21);
	//memccpy(dest, orig, 'n', 8*sizeof(char));
	printf("Destination after memccpy: %s\n _____________\n", dest);

	char dest_[] = "abcdefghijklmnopqrstuvwxyz";
	char orig_[] ="string with\200inside !";
	printf("Destination: %s\n", dest_);
	ft_memccpy(dest_, orig_, 0600, 21);
	printf("Destination after ft_memccpy: %s\n", dest_);
	return (0);
}
