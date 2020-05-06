/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 16:52:13 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/04 16:52:16 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


int main (void)
{
	/*int c;
	c = 'Q';
	printf("Answer when non-numeric character is passed using isdigit: %d\n", isdigit(c));
	c = '5';
	printf("Answer when when numeric character is passed using isdigit: %d\n", isdigit(c));*/

	int c;
	c = 'Q';
	printf("Answer when non-numeric character is passed using ft_isdigit: %d\n", isdigit(c));
	c = '5';
	printf("Answer when when numeric character is passed using ft_isdigit: %d\n", isdigit(c));
		
	return (0);	
}