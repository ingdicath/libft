/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 14:11:25 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/15 14:11:28 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int main (void)
{
	char *a = "the cake is a lie !\0I'm hidden lol\r\n";
	char *b = "string \x01 of \x63 non \x0a ascii \x12 chars\x1d";
	ft_putendl_fd(a, 1);
	ft_putendl_fd(b, 1);
	return (0);
}