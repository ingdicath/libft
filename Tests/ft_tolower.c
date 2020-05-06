/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 11:24:38 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/05 11:24:40 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_tolower(int c)

{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return(c);
}

int main (void)
{
    /*char c = 'S';
    printf("%c in lowercase is represented as %c\n", c, tolower(c));
    
    int i = 0;
    char str[] = "BOSTON MaRathon";
    char ch;
    while (str[i])
    {
    	ch = str[i];
    	putchar(tolower(ch));
    	i++;
    }*/

	char c = 'S';
    printf("%c in lowercase is represented as %c\n", c, ft_tolower(c));
    
    int i = 0;
    char str[] = "BOSTON MaRathon";
    char ch;
    while (str[i])
    {
    	ch = str[i];
    	putchar(ft_tolower(ch));
    	i++;
    }
	return (0);
}