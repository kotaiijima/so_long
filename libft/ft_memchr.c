/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/10 17:09:01 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}

// int main(int argc, char **argv)
// {
// 	char *ft_str = (char *)ft_memchr(argv[1],'4',10);
// 	char *org_str = (char *)memchr(argv[1],'4',10);
// 	printf("ft : \t%s\n",ft_str);
// 	printf("org: \t%s\n",org_str);
// 	(void)argc;
// }
