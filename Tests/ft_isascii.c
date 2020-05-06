/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:49:23 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/04 17:49:25 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int main(void)
{
	char chars[] = {'4', 0x80, 'Z'};
	int SIZE = sizeof(chars) / sizeof(char);
	int i = 0;

    /*while (i < SIZE)
    {
    	if (isascii(chars[i]))
    		printf("Char %c is an ASCII character\n", chars[i]);
    	else
    		printf("Char %c is not an ASCII character\n", chars[i]);
    	i++;
    }*/

	while (i < SIZE)
    {
    	if (ft_isascii(chars[i]))
    		printf("Char %c is an ASCII character\n", chars[i]);
    	else
    		printf("Char %c is not an ASCII character\n", chars[i]);
    	i++;
    }

    return (0);
}
