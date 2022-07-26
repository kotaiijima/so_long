/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:27 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
// 	//'0'
// 	printf("---------------------\n");
// 	int n = '0';
// 	printf("n='0',ascii=%d\n",n);
// 	int ft_ans = ft_isdigit(n);
// 	int org_ans = isdigit(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// '5'
// 	printf("---------------------\n");
// 	 n = '5';
// 	printf("n='5',ascii=%d\n",n);
// 	 ft_ans = ft_isdigit(n);
// 	 org_ans = isdigit(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// '9'
// 	printf("---------------------\n");
// 	 n = '9';
// 	printf("n='9',ascii=%d\n",n);
// 	 ft_ans = ft_isdigit(n);
// 	 org_ans = isdigit(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// 1
// 	printf("---------------------\n");
// 	 n = 1;
// 	printf("n=1,ascii=%d\n",n);
// 	 ft_ans = ft_isdigit(n);
// 	 org_ans = isdigit(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// ' '
// 	printf("---------------------\n");
// 	 n = '\0';
// 	printf("n=' ',ascii=%d\n",n);
// 	 ft_ans = ft_isdigit(n);
// 	 org_ans = isdigit(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");
// }
