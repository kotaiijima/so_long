/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
// 	//a
// 	int n = 'a';
// 	printf("n='a',ascii=%d\n",n);
// 	int ft_ans = ft_isascii(n);
// 	int org_ans = isascii(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// Z
// 	 n = 'Z';
// 	printf("n='Z',ascii=%d\n",n);
// 	 ft_ans = ft_isascii(n);
// 	 org_ans = isascii(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// " "
// 	 n = ' ';
// 	printf("n=' ',ascii=%d\n",n);
// 	 ft_ans = ft_isascii(n);
// 	 org_ans = isascii(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");
// }
