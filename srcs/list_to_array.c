/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:59:50 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/21 12:23:11 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	list_to_array(t_info *info)
{
	t_list	*node;
	int		i;

	node = info->map_info.tmp_list;
	node = node->next;
	info->map_info.map = malloc(sizeof(char *) * info->map_info.height);
	if (info->map_info.map == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < info->map_info.height)
	{
		info->map_info.map[i] = node->content;
		node = node->next;
		i++;
	}
}
