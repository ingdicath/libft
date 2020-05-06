/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 08:44:38 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/05 08:44:43 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int 	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}


int main(void)
{
	char chars[] = { '\n', '\t','Z','*'};
	int SIZE = sizeof(chars) / sizeof(char);
	int i = 0;

    /*while (i < SIZE)
    {
    	if (isprint(chars[i]))
    		printf("Char %c is a printable ASCII character\n", chars[i]);
    	else
    		printf("Char %c is not a printable ASCII character\n", chars[i]);
    	i++;
    }*/

    while (i < SIZE)
    {
    	if (ft_isprint(chars[i]))
    		printf("Char %c is a printable ASCII character\n", chars[i]);
    	else
    		printf("Char %c is not a printable ASCII character\n", chars[i]);
    	i++;
    }

	return (0);
}