/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 13:01:09 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/26 13:01:10 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
