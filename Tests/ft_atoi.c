/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:03:56 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/15 18:08:15 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int		ft_iswhitespace(int c)
{
	c = (unsigned char)c;
	if (c != '\0' && (c == ' ' || c == '\t' || c == '\v' ||
		c == '\f' || c == '\r' || c == '\n'))
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	unsigned long	res;
	int				i;
	int				sig;

	i = 0;
	res = 0;
	sig = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		sig *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
		if (res > 9223372036854775807 && sig == -1)
			return (0);
		else if (res > 9223372036854775807 && sig == 1)
			return (-1);
	}
	return (sig * res);
}

int main (void)
{
	int val;
	char str1[] = "     -12345";
	char str2[] = "Boston m1rathon";
	char *a = "\t\v\f\r\n \f-06050";
	char *b = "99999999999999999999999999";
	char *c = "-99999999999999999999999999";
	char *d = "+548";
	char *e = "+-54";
	char *f = "++47";

	val = atoi(str1);
	//printf("String value = %s\n", str1);=
	printf("Integer value = %d\n", val);
	val = atoi(str2);
	//printf("String value = %s\n", str2);
	printf("Integer value = %d\n", val);
	val = atoi(a);
	//printf("String value = %s\n", a);
	printf("Integer value = %d\n", val);
	val = atoi(b);
	//printf("String value = %s\n", b);
	printf("Integer value = %d\n", val);
	val = atoi(c);
	//printf("String value = %s\n", c);
	printf("Integer value = %d\n", val);
	val = atoi(d);
	//printf("String value = %s\n", d);
	printf("Integer value = %d\n", val);
	val = atoi(e);
	//printf("String value = %s\n", e);
	printf("Integer value = %d\n", val);
	val = atoi(f);
	//printf("String value = %s\n", f);
	printf("Integer value = %d\n ...........................\n", val);

	val = ft_atoi(str1);
	//printf("String ft_atoi str1 value = %s\n", str1);
	printf("Integer str1 value = %d\n", val);
	val = ft_atoi(str2);
	//printf("String ft_atoi str2 value = %s\n", str2);
	printf("Integer str2 value = %d\n", val);
	val = ft_atoi(a);
	//printf("String value = %s\n", a);
	printf("Integer value = %d\n", val);
	val = ft_atoi(b);
	//printf("String value = %s\n", b);
	printf("Integer value = %d\n", val);
	val = ft_atoi(c);
	//printf("String value = %s\n", c);
	printf("Integer value = %d\n", val);
	val = ft_atoi(d);
	//printf("String value = %s\n", d);
	printf("Integer value = %d\n", val);
	val = ft_atoi(e);
	//printf("String value = %s\n", e);
	printf("Integer value = %d\n", val);
	val = ft_atoi(f);
	//printf("String value = %s\n", f);
	printf("Integer value = %d\n ...........................\n", val);


	return (0);
}
