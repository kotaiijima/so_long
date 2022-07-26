/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!(dstsize))
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
// 	printf("---------------------\n");
// 	char ft_dst[100]  = "hello 42 world!";
// 	char org_dst[100]  = "hello 42 world!";
// 	char *src = "abcdefg";
// 	size_t dstsize = 3;
// 	printf("dst:%s | src:%s | dstsize:%zu\n",ft_dst,src,dstsize);
// 	size_t ft_ans = ft_strlcpy(ft_dst,src,dstsize);
// 	size_t org_ans = strlcpy(org_dst,src,dstsize);
// 	printf("result  ft_dst:%s | org_dst:%s \n",ft_dst,org_dst);
// 	printf("ft = %zu ,  org = %zu\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	printf("---------------------\n");
// 	char ft_dst2[100]  = "hello 42 world!";
// 	char org_dst2[100] = "hello 42 world!";
// 	dstsize = 9;
// 	printf("dst:%s | src:%s | dstsize:%zu\n",ft_dst2,src,dstsize);
// 	ft_ans = ft_strlcpy(ft_dst2,src,dstsize);
// 	org_ans = strlcpy(org_dst2,src,dstsize);
// 	printf("result  ft_dst2:%s | org_dst2:%s \n",ft_dst2,org_dst2);
// 	printf("ft = %zu ,  org = %zu\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	printf("---------------------\n");
// 	char ft_dst3[100]  = "hello 42 world!";
// 	char org_dst3[100] = "hello 42 world!";
// 	dstsize = 0;
// 	printf("dst:%s | src:%s | dstsize:%zu\n",ft_dst3,src,dstsize);
// 	ft_ans = ft_strlcpy(ft_dst3,src,dstsize);
// 	org_ans = strlcpy(org_dst3,src,dstsize);
// 	printf("result  ft_dst3:%s | org_dst3:%s \n",ft_dst3,org_dst3);
// 	printf("ft = %zu ,  org = %zu\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	printf("---------------------\n");
// 	char ft_dst4[100]  = "hello 42 world!";
// 	char org_dst4[100] = "hello 42 world!";
// 	dstsize = 100;
// 	printf("dst:%s | src:%s | dstsize:%zu\n",ft_dst4,src,dstsize);
// 	ft_ans = ft_strlcpy(ft_dst4,src,dstsize);
// 	org_ans = strlcpy(org_dst4,src,dstsize);
// 	printf("result  ft_dst4:%s | org_dst4:%s \n",ft_dst4,org_dst4);
// 	printf("ft = %zu ,  org = %zu\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");
// }
