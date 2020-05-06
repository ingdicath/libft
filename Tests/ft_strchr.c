/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:44:07 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/10/29 15:36:59 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (c == '\0')
		return ((char *)s);
	else if (*s == '\0')
		return (NULL);
	else
		return ((char *)s);
}

int main (void)
{
	char *string = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *p;
	char *pe;
	p = strchr (string, '\0');
	pe =  ft_strchr (string,'\0');

	/*if(p == NULL)
		printf("character is not present in the string\n");
	else*/
		printf("After strchr: %s\n", p);

	/*if(pe == NULL)
		printf("character is not present in the string");
	else*/
		printf("After ft_strchr: %s\n", pe);
	return (0);
}	
	
	/*printf("Character is %c", *p);
	printf ("Character is %c at %p", *p, p);
	printf ("Character u is found at position %ld\n", p-string+1);
	printf ("First occurrence of character \"u\" in \"%s\" is" \
           " \"%s\"",string, p);*/ 
