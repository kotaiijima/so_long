/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:04:26 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/24 14:41:03 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_map_rectangle(t_info *info)
{
	if (info->map_info.width <= 2 || info->map_info.height <= 2)
		error_and_exit("Error\nmap is too small.");
}

void	check_map_smooth(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->map_info.height)
	{
		if ((int)ft_strlen(info->map_info.map[i]) != info->map_info.width)
			error_and_exit("Error\nmap has invalid width.");
		i++;
	}
}

void	check_characters(t_info *info)
{
	char	*tmp_address;
	int		i;
	int		j;

	i = 0;
	while (i < info->map_info.height)
	{
		j = 0;
		while (j < info->map_info.width)
		{
			if (info->map_info.map[i][j] == 'C')
				info->map_info.collect_count++;
			else if (info->map_info.map[i][j] == 'P')
				info->map_info.player_count++;
			else if (info->map_info.map[i][j] == 'E')
				info->map_info.exit_count++;
			tmp_address = ft_strchr("10CEP", info->map_info.map[i][j]);
			if (tmp_address == NULL)
				error_and_exit("Error\nmap has invalid character.");
			j++;
		}
		i++;
	}
}

void	check_enclose_wall(t_info *info)
{
	int	i;
	int	j;

	i = 0;
	while (i < info->map_info.height)
	{
		j = 0;
		while (j < info->map_info.width)
		{
			if ((j == 0 || j == (int)(ft_strlen(info->map_info.map[i]) - 1)) \
			&& info->map_info.map[i][j] != '1')
				error_and_exit("Error\nmap is not enclosed wall.");
			if ((i == 0 || i == info->map_info.height - 1) && \
			info->map_info.map[i][j] != '1')
				error_and_exit("Error\nmap is not enclosed wall.");
			j++;
		}
		i++;
	}
}

void	check_map(t_info *info)
{
	check_map_rectangle(info);
	check_map_smooth(info);
	check_characters(info);
	if (info->map_info.player_count != 1 || \
	info->map_info.collect_count == 0 || \
	info->map_info.exit_count == 0)
		error_and_exit("Error\nmap lacks elements.");
	check_enclose_wall(info);
}
