/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:57:14 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/24 15:15:17 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	print_pedometer(t_info *info)
{
	ft_putstr_fd("pedometer:", STDOUT_FILENO);
	ft_putnbr_fd(info->player_info.pedometer, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

static void	check_goal_condition(t_info *info)
{
	if (info->map_info.collect_count == info->player_info.collect_count)
	{
		info->player_info.pedometer++;
		info->map_info.map[info->player_info.c_y][info->player_info.c_x] = '0';
		info->map_info.map[info->player_info.n_y][info->player_info.n_x] = 'P';
		print_pedometer(info);
		ft_putstr_fd("Game clear!\n", STDOUT_FILENO);
		exit (EXIT_SUCCESS);
	}
}

static void	swap_position(t_info *info)
{
	if (info->map_info.map[info->player_info.c_y][info->player_info.c_x] == '1')
		return ;
	else if (info->map_info.map[info->player_info.n_y][info->player_info.n_x] \
	== 'C')
	{
		info->player_info.pedometer++;
		info->player_info.collect_count++;
		info->map_info.map[info->player_info.c_y][info->player_info.c_x] = '0';
		info->map_info.map[info->player_info.n_y][info->player_info.n_x] = 'P';
		print_pedometer(info);
	}
	else if (info->map_info.map[info->player_info.n_y][info->player_info.n_x] \
	== '0')
	{
		info->player_info.pedometer++;
		info->map_info.map[info->player_info.c_y][info->player_info.c_x] = '0';
		info->map_info.map[info->player_info.n_y][info->player_info.n_x] = 'P';
		print_pedometer(info);
	}
	else if (info->map_info.map[info->player_info.n_y][info->player_info.n_x] \
	== 'E')
		check_goal_condition(info);
}

static void	execute_swap(t_info *info, int x, int y, bool pm)
{
	if (pm == true)
	{
		info->player_info.c_x = info->player_info.position_x;
		info->player_info.c_y = info->player_info.position_y;
		info->player_info.n_x = info->player_info.position_x + x;
		info->player_info.n_y = info->player_info.position_y + y;
	}
	else if (pm == false)
	{
		info->player_info.c_x = info->player_info.position_x;
		info->player_info.c_y = info->player_info.position_y;
		info->player_info.n_x = info->player_info.position_x - x;
		info->player_info.n_y = info->player_info.position_y - y;
	}
	swap_position(info);
}

void	move_player(t_info *info, int keycode)
{
	if (keycode == 'a')
		execute_swap(info, 1, 0, false);
	else if (keycode == 'w')
		execute_swap(info, 0, 1, false);
	else if (keycode == 'd')
		execute_swap(info, 1, 0, true);
	else if (keycode == 's')
		execute_swap(info, 0, 1, true);
}
