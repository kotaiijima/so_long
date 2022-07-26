/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	 size_t	i;

	 i = 0;
	 while (i < n)
	{
		 if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (!s1[i] && !s2[i])
			return (0);
		i++;
	}
	return (0);
}

// int main(int argc, char **argv)
// {
// 	printf("ft :%d\n",ft_strncmp(argv[1],argv[2],42));
// 	printf("org:%d\n",strncmp(argv[1],argv[2],42));
// 	(void)argc;
// }
