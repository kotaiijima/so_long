/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main(int argc, char **argv)
// {
// 	char *ft_str = (char *)ft_strchr(argv[1],'4');
// 	char *org_str = (char *)strchr(argv[1],'4');
// 	printf("ft : \t%s\n",ft_str);
// 	printf("org: \t%s\n",org_str);
// 	printf("ft  : %p\n",&ft_str);
// 	printf("org : %p\n",&org_str);
// 	(void)argc;
// }

// int main()
// {
// 	char *ft_str = ft_strchr("42\0tokyo",'\0');
// 	char *org_str = strchr("42\0tokyo",'\0');
// 	printf("ft  : %s\n",ft_str -1);
// 	printf("org : %s\n",org_str -1);
// }
