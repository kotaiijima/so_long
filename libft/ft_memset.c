/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:52:40 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)buf)[i++] = ch;
	return (buf);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void	success_pattern(void);
// void	fail_pattern(void);
// int main()
// {
// 	success_pattern();
// 	fail_pattern();
// 	return (0);
// }

// void success_pattern(void)
// {
// 	unsigned char dest_1_1[256]= "abcdefg";
// 	unsigned char dest_1_2[256]= "abcdefg";
// 	int i = 0;
// 	int ch = 'A';
// 	printf("value: %s | word: %c\n",dest_1_1,word);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memset(dest_1_1,word,count));
// 	printf("org_is: %s\n",(unsigned char *)memset(dest_1_2,word,count));

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

// void fail_pattern(void)
// {
// 	unsigned char dest_1_1[256]= "abcdefg";
// 	unsigned char dest_1_2[256]= "abcdefg";
// 	int i = 0;
// 	int word = '\0';
// 	printf("value: %s | word: %c\n",dest_1_1,word);
// 	size_t count = 5;
// 	printf("ft_is: %s |",(unsigned char *)ft_memset(dest_1_1,word,count));
// 	printf("org_is: %s\n",(unsigned char *)memset(dest_1_2,word,count));

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
