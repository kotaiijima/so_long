/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;

	s_len = ft_strlen(s);
	while (0 <= s_len)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}

// int main(int argc, char **argv)
// {
// 	char *ft_str = (char *)ft_strrchr(argv[1],'\0');
// 	char *org_str = (char *)strrchr(argv[1],'\0');
// 	printf("ft : \t%s\n",ft_str);
// 	printf("org: \t%s\n",org_str);
// 	(void)argc;
// }

// int main()
// {
// 	char *ft_str = ft_strrchr("42\0tokyo",'\0');
// 	char *org_str = strrchr("42\0tokyo",'\0');
// 	printf("ft  : %s\n",ft_str -1);
// 	printf("org : %s\n",org_str -1);
// }
