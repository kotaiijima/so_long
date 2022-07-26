/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:50:22 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void	normal_pattern(void);
// void	null_pattern(void);
// int main()
// {
// 	normal_pattern();
// 	null_pattern();
// 	return (0);
// }

// void normal_pattern(void)
// {
// 	unsigned char dest_1_1[256]= "abcdefg";
// 	unsigned char dest_1_2[256]= "abcdefg";
// 	printf("value: %s\n",dest_1_1);
// 	size_t count = 5;
// 	ft_bzero(dest_1_1,count);
// 	bzero(dest_1_2,count);
// 	printf("ft_is: %s |",dest_1_1);
// 	printf("org_is: %s\n",dest_1_2);

// 		if (!(dest_1_1[0]) && !(dest_1_2[0]))
// 			printf("OK!\n");
// 		else
// 			printf("ERROR!\n");
// }

// void null_pattern(void)
// {
// 	unsigned char dest_1_1[256]= '\0';
// 	unsigned char dest_1_2[256]= '\0';
// 	printf("value: %s\n",dest_1_1);
// 	size_t count = 5;
// 	ft_bzero(dest_1_1,count);
// 	bzero(dest_1_2,count);
// 	printf("ft_is: %s |",dest_1_1);
// 	printf("org_is: %s\n",dest_1_2);

// 		if (!(dest_1_1[0]) && !(dest_1_2[0]))
// 			printf("OK!\n");
// 		else
// 			printf("ERROR!\n");
// }
