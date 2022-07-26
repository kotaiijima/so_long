/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:10 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:09 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*output;
	int		len;

	len = ft_strlen(src);
	output = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(output, src, len + 1);
	return (output);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	char	*string_data;
// 	char	*newstr;
// 	int 	ag;

// 	ag = argc;
// 	string_data = argv[1];
// 	newstr = ft_strdup(string_data);
// 	printf("check_data : %s\n", newstr);
// 	newstr = ft_strdup(string_data);
// 	printf("check_data : %s\n", newstr);
// 	return (0);
// }
