/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:09:54 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/20 14:54:33 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_init(t_info *info)
{
	info->map_info.width = 0;
	info->map_info.height = 0;
	info->map_info.player_count = 0;
	info->map_info.collect_count = 0;
	info->map_info.exit_count = 0;
	info->map_info.tmp_list = NULL;
	info->map_info.map = NULL;
}

void	player_init(t_info *info)
{
	info->player_info.position_x = 0;
	info->player_info.position_y = 0;
	info->player_info.pedometer = 0;
	info->player_info.collect_count = 0;
	info->player_info.c_x = 0;
	info->player_info.c_y = 0;
	info->player_info.n_x = 0;
	info->player_info.n_y = 0;
}

void	image_init(t_info *info)
{
	info->images.player = NULL;
	info->images.collected_player = NULL;
	info->images.wall = NULL;
	info->images.collection = NULL;
	info->images.exit = NULL;
	info->images.empty = NULL;
	info->images.image_size = 0;
}

void	info_init(t_info *info)
{
	map_init(info);
	player_init(info);
	image_init(info);
	info->mlx = NULL;
	info->mlx_win = NULL;
	info->filename = NULL;
}

int	main(int argc, char **argv)
{
	t_info	info;

	if (argc != 2)
		exit(EXIT_FAILURE);
	info_init(&info);
	check_filename(argv[1]);
	info.filename = argv[1];
	read_map(&info);
	list_to_array(&info);
	check_map(&info);
	display_map(&info);
	set_event(&info);
	mlx_loop(info.mlx);
	return (0);
}
