/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_player_position.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:45:14 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/19 17:50:26 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	input_player_position(t_info *info)
{
	t_list	*node;
	int		i;
	int		j;

	node = info->map_info.tmp_list;
	node = node->next;
	i = 0;
	while (node != NULL)
	{
		j = 0;
		while (node->content[j] != '\0')
		{
			if (node->content[j] == 'P')
			{
				info->player_info.position_y = i;
				info->player_info.position_x = j;
				return ;
			}
			j++;
		}
		node = node->next;
		i++;
	}
}
