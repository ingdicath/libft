/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:25:11 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/05 10:25:21 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
    	return (c - 32);
    return (c);
}

int main (void)
{
    /*char c = 'x';
    printf("%c in uppercase is represented as %c\n", c, toupper(c));
    
    int i = 0;
    char str[] = "BOSTON marathon";
    char ch;
    while (str[i])
    {
    	ch = str[i];
    	putchar(toupper(ch));
    	i++;
    }*/

	char c = 'x';
    printf("%c in uppercase is represented as %c\n", c, ft_toupper(c));
    
    int i = 0;
    char str[] = "BOSTON mArathon";
    char ch;
    while (str[i])
    {
    	ch = str[i];
    	putchar(ft_toupper(ch));
    	i++;
    }

	return (0);
}