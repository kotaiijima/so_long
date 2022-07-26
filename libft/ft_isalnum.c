/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima   <kiijima@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:47 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/09 18:49:09 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
// 	int ft_ans = ft_isalnum(n);
// 	int org_ans = isalnum(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// '5'
// 	printf("---------------------\n");
// 	 n = '5';
// 	printf("n='5',ascii=%d\n",n);
// 	 ft_ans = ft_isalnum(n);
// 	 org_ans = isalnum(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// '9'
// 	printf("---------------------\n");
// 	 n = '9';
// 	printf("n='9',ascii=%d\n",n);
// 	 ft_ans = ft_isalnum(n);
// 	 org_ans = isalnum(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");

// 	// 1
// 	printf("---------------------\n");
// 	 n = 1;
// 	printf("n=1,ascii=%d\n",n);
// 	 ft_ans = ft_isalnum(n);
// 	 org_ans = isalnum(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");
// 	// ' '
// 	printf("---------------------\n");
// 	 n = ' ';
// 	printf("n=' ',ascii=%d\n",n);
// 	 ft_ans = ft_isalnum(n);
// 	 org_ans = isalnum(n);
// 	printf("ft = %d ,  org = %d\n",ft_ans,org_ans);
// 	if (ft_ans == org_ans)
// 		printf("OK!\n");
// 	else
// 		printf("ERROR!\n");
// }
