/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:53:04 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/23 17:56:02 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n == NULL)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}

// int main()
// {
// 	t_list * n = ft_lstnew((void*)1);
// 	if (n->content == (void*)1)
// 		printf("content:OK\n");
// 	else
// 		perror("error\n");
// 	if (n->next == NULL)
// 		printf("next:OK\n");
// 	else
// 		perror("error\n");
// 	free(n);
// }
