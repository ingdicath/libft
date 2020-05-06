/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/27 11:26:44 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/28 14:29:03 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isnegative(int num)
{
	if (num < 0)
		return (1);
	return (0);
}

static int	ft_nsize(long num)
{
	int		len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	long	temp;
	long	len;
	int		neg;
	char	*str;

	temp = (long)n;
	neg = ft_isnegative(n);
	len = ft_nsize(n) + neg;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (neg)
		temp *= -1;
	while (len >= 0)
	{
		str[len] = temp % 10 + '0';
		len--;
		temp = temp / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
