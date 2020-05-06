/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:16:34 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/04 17:16:36 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

int main (void)
{
	/*char c;
	c = 'Q';
	printf("Answer when Upp.letter is passed using isalnum: %d\n", isalnum(c));
	c = 'q';
	printf("Answer when Low.letter is passed using isalnum:%d\n", isalnum(c));
	c = '5';
	printf("Answer when number is passed using isalnum: %d\n", isalnum(c));
	c = ' ';
	printf("Answer when different is passed using isalnum: %d\n", isalnum(c));*/

	char c;
	c = 'Q';
	printf("Answer when Upp.letter is passed using ft_isalnum: %d\n", ft_isalnum(c));
	c = 'q';
	printf("Answer when Low.letter is passed using ft_isalnum:%d\n", ft_isalnum(c));
	c = '5';
	printf("Answer when number is passed using ft_isalnum: %d\n", ft_isalnum(c));
	c = ' ';
	printf("Answer when different is passed using ft_isalnum: %d\n", ft_isalnum(c));

	return (0);
}