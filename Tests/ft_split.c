/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/28 17:10:10 by dsalaman      #+#    #+#                 */
/*   Updated: 2019/11/28 17:10:11 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void		ft_clean_memory(char **str, size_t index)
{
	size_t i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t		i;
	size_t		res;

	i = 0;
	res = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		res++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (res);
}

static size_t	ft_word_size(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*ft_next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

char			**ft_split(char const *s, char c)
{
	size_t		count;
	size_t		i;
	char		**str;

	count = ft_count_words((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < count)
	{
		s = ft_next_word(s, c);
		str[i] = ft_substr(s, 0, ft_word_size(s, c));
		if (str[i] == NULL)
		{
			ft_clean_memory(str, i);
			return (NULL);
		}
		i++;
		s = s + ft_word_size(s, c);
	}
	str[count] = NULL;
	return (str);
}

/*int		main(void)
{
	char const *s;
	char		c;
	char		**res;
	size_t		i;

	i = 0;
	s = "                  olol";
	c = ' ';
	res = ft_split(s, c);

	while (i < ft_count_words(s, c))
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
  
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	**str;
	int		i;
	int		arg;

	if (argc == 1)
		return (0);
	i = 0;
	if ((arg = atoi(argv[1])) == 1)
	{
		if (!(str = ft_split("          ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (str[i] != '\0')
			{
				ft_print_result(str[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	return (0);
}
