/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 14:57:27 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/04 16:38:09 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main (void)
{
	/*char c;
	c = 'Q';
	printf("Answer when uppercase alphabet is passed using isalpha: %d\n", isalpha(c));
	c = 'q';
	printf("Answer when lowercase alphabet is passed using isalpha:%d\n", isalpha(c));
	c = '5';
	printf("Answer when non-alphabetic alphabet is passed using isalpha: %d\n", isalpha(c));
	c = ' ';
	printf("Answer when non-alphabetic alphabet is passed using isalpha: %d\n", isalpha(c));*/

	char c;
	c = 'Q';
	printf("Answer when uppercase alphabet is passed using ft_isalpha: %d\n", ft_isalpha(c));
	c = 'q';
	printf("Answer when lowercase alphabet is passed using ft_isalpha:%d\n", ft_isalpha(c));
	c = '5';
	printf("Answer when non-alphabetic alphabet is passed using ft_isalpha: %d\n", ft_isalpha(c));
	c = ' ';
	printf("Answer when non-alphabetic alphabet is passed using ft_isalpha: %d\n", ft_isalpha(c));

	return (0);
}
