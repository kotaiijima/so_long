/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:52:46 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/19 17:20:37 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

// int main()
// {
// 	t_list *lst1 = ft_lstnew("aaa");
// 	t_list *lst2 = ft_lstnew("bbb");
// 	ft_lstadd_back(&lst1, lst2);
// 	lst1 = lst1->next;

// 	printf("%s", (char *)lst1->content);
// }
