/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:53:39 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void	success_pattern(void);
// void	dst_null_pattern(void);
// void	src_null_pattern(void);
// void	both_null_pattern(void);
// void	overlap_pattern(void);
// int main()
// {
// 	success_pattern();
// 	dst_null_pattern();
// 	src_null_pattern();
// 	both_null_pattern();
// 	overlap_pattern();
// 	return (0);
// }

// void success_pattern(void)
// {
// 	unsigned char dest_1_1[256]= "abcdefg";
// 	unsigned char dest_1_2[256]= "abcdefg";
// 	int i = 0;
// 	unsigned char src[256] = "42TOKYO";
// 	printf("value: %s | src: %s\n",dest_1_1,src);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memmove(dest_1_1,src,count));
// 	printf("org_is: %s\n",(unsigned char *)memmove(dest_1_2,src,count));

// 	while (dest_1_1[i] && dest_1_2[i])
// 	{
// 		if (dest_1_1[i] != dest_1_2[i])
// 		{
// 			printf("ERROR!\n");
// 			return ;
// 		}
// 		i++;
// 	}
// 	printf("OK!\n");
// }

// void dst_null_pattern(void)
// {
// 	unsigned char dest_2_1[256] = "";
// 	unsigned char dest_2_2[256] = "";
// 	int i = 0;
// 	unsigned char src[256] = "42TOKYO";
// 	printf("value: %s | src: %s\n",dest_2_1,src);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memmove(dest_2_1,src,count));
// 	printf("org_is: %s\n",(unsigned char *)memmove(dest_2_2,src,count));

// 	while (dest_2_1[i] && dest_2_2[i])
// 	{
// 		if (dest_2_1[i] != dest_2_2[i])
// 		{
// 			printf("ERROR!\n");
// 			return ;
// 		}
// 		i++;
// 	}
// 	printf("OK!\n");
// }

// void src_null_pattern(void)
// {
// 	unsigned char dest_3_1[256] = "abcdefg";
// 	unsigned char dest_3_2[256] = "abcdefg";
// 	int i = 0;
// 	unsigned char src[256] = "";
// 	printf("value: %s | src: %s\n",dest_3_1,src);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memmove(dest_3_1,src,count));
// 	printf("org_is: %s\n",(unsigned char *)memmove(dest_3_2,src,count));

// 	while (dest_3_1[i] && dest_3_2[i])
// 	{
// 		if (dest_3_1[i] != dest_3_2[i])
// 		{
// 			printf("ERROR!\n");
// 			return ;
// 		}
// 		i++;
// 	}
// 	printf("OK!\n");
// }

// void both_null_pattern(void)
// {
// 	unsigned char dest_4_1[256] = "";
// 	unsigned char dest_4_2[256] = "";
// 	int i = 0;
// 	unsigned char src[256] = "";
// 	printf("value: %s | src: %s\n",dest_4_1,src);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memmove(dest_4_1,src,count));
// 	printf("org_is: %s\n",(unsigned char *)memmove(dest_4_2,src,count));

// 	while (dest_4_1[i] && dest_4_2[i])
// 	{
// 		if (dest_4_1[i] != dest_4_2[i])
// 		{
// 			printf("ERROR!\n");
// 			return ;
// 		}
// 		i++;
// 	}
// 	printf("OK!\n");
// }

// void overlap_pattern(void)
// {
// 	unsigned char dest_5_1[256] = "1234567";
// 	unsigned char dest_5_2[256] = "1234567";
// 	int i = 0;
// 	printf("value: %s \n",dest_5_1);
// 	size_t n = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memmove(&dest_5_1[3],&dest_5_1,n));
// 	printf("org_is: %s\n",(unsigned char *)memmove(&dest_5_2[3],dest_5_2,n));

// 	while (dest_5_1[i] && dest_5_2[i])
// 	{
// 		if (dest_5_1[i] != dest_5_2[i])
// 		{
// 			printf("ERROR!\n");
// 			return ;
// 		}
// 		i++;
// 	}
// 	printf("OK!\n");
// }
