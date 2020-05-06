/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 11:51:26 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/31 16:29:08 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;

	dest = b;
	while (len > 0)
	{
		*dest = (unsigned char)c;
		dest++;
		len--;
	}
	return (b);
}

int main() 
{
	/*char str[] = "I am going to run Boston Marathon next year";
	printf("Before memset(): %s\n", str);
    memset(str + 4, '*', 6*sizeof(char)); //Using function pred.
    printf("After memset():  %s\n", str);*/
  
	char str[] = "I am going to run Boston Marathon next year";
	printf("Before ft_memset(): %s\n", str); 
    ft_memset(str + 4, '*', 6*sizeof(char)); //Put 6 characters starting from str[4] with '*' 
    printf("After ft_memset():  %s\n", str);

    return (0); 
}
