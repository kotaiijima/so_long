/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:10 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:54:54 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static	int	ft_count(char const *s, char c);
static	int	ft_size_str(char const *s, char c, size_t i);
static char	**ft_free(char **strs, int j);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	int		size;
	char	**str;

	count = ft_count(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < count)
	{
		while (s[i] == c)
			i++;
		size = ft_size_str(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (str[j] == NULL)
			return (ft_free(str, j));
		i += size;
	}
	str[j] = NULL;
	return (str);
}

int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_size_str(char const *s, char c, size_t i)
{
	int	n;

	n = 0;
	while (s[i] != c && s[i])
	{
		n++;
		i++;
	}
	return (n);
}

char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}
