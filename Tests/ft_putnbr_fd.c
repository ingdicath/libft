/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 14:56:04 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/15 14:56:06 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + 48, fd);
		}
		else
			ft_putchar_fd(n + 48, fd);
	}
}

int	main(void)
{
	int num;
	num = -2147483647;
	ft_putnbr_fd(num, 1);
	return (0);
}