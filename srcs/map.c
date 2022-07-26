/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:13:14 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/24 15:26:36 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	read_map(t_info *info)
{
	int		i;
	int		fd;
	char	*line;

	info->map_info.tmp_list = ft_lstnew(NULL);
	fd = open(info->filename, O_RDONLY);
	if (fd == -1)
		exit(EXIT_FAILURE);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		if (line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		ft_lstadd_back(&info->map_info.tmp_list, ft_lstnew(line));
		i++;
	}
	close(fd);
	check_lst_null(info);
	info->map_info.height = i;
	info->map_info.width = \
	(int)ft_strlen(info->map_info.tmp_list->next->content);
	input_player_position(info);
}

void	assign_image(t_info *info)
{
	info->images.player = mlx_xpm_file_to_image(info->mlx, \
	IMG_PLAYER, &(info->images.image_size), &(info->images.image_size));
	if (info->images.player == NULL)
		error_and_exit("Error\nplayer_image not allocated.");
	info->images.collected_player = mlx_xpm_file_to_image(info->mlx, \
	IMG_PLAYER2, &(info->images.image_size), &(info->images.image_size));
	if (info->images.collected_player == NULL)
		error_and_exit("Error\ncollected_player_image not allocated.");
	info->images.wall = mlx_xpm_file_to_image(info->mlx, \
	IMG_WALL, &info->images.image_size, &info->images.image_size);
	if (info->images.wall == NULL)
		error_and_exit("Error\nwall_image not allocated.");
	info->images.collection = mlx_xpm_file_to_image(info->mlx, \
	IMG_COLLECTION, &info->images.image_size, &info->images.image_size);
	if (info->images.collection == NULL)
		error_and_exit("Error\ncollect_image not allocated.");
	info->images.exit = mlx_xpm_file_to_image(info->mlx, \
	IMG_EXIT, &info->images.image_size, &info->images.image_size);
	if (info->images.exit == NULL)
		error_and_exit("Error\nexit_image not allocated.");
	info->images.empty = mlx_xpm_file_to_image(info->mlx, \
	IMG_GRASS, &info->images.image_size, &info->images.image_size);
	if (info->images.empty == NULL)
		error_and_exit("Error\nempty_image not allocated.");
}

void	ascii_to_xpm(t_info *info, char c, int i, int j)
{
	if (c == '0')
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.empty, i * PIXEL_SIZE, j * PIXEL_SIZE);
	else if (c == '1')
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.wall, i * PIXEL_SIZE, j * PIXEL_SIZE);
	else if (c == 'P' && info->map_info.collect_count == \
	info->player_info.collect_count)
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.collected_player, i * PIXEL_SIZE, j * PIXEL_SIZE);
	else if (c == 'P')
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.player, i * PIXEL_SIZE, j * PIXEL_SIZE);
	else if (c == 'C')
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.collection, i * PIXEL_SIZE, j * PIXEL_SIZE);
	else if (c == 'E')
		mlx_put_image_to_window(info->mlx, info->mlx_win, \
		info->images.exit, i * PIXEL_SIZE, j * PIXEL_SIZE);
}

void	list_to_window(t_info *info)
{
	t_list	*node;
	int		i;
	int		j;

	node = info->map_info.tmp_list;
	node = node->next;
	j = 0;
	while (node != NULL)
	{
		i = 0;
		while (i < info->map_info.width)
		{
			ascii_to_xpm(info, node->content[i], i, j);
			i++;
		}
		node = node->next;
		j++;
	}
}

void	display_map(t_info *info)
{
	info->mlx = mlx_init();
	if (info->mlx == NULL)
		error_and_exit("Error\nmlx not initialized.");
	info->mlx_win = mlx_new_window(info->mlx, \
	(info->map_info.width * PIXEL_SIZE), \
	(info->map_info.height * PIXEL_SIZE), "so_long");
	if (info->mlx_win == NULL)
		error_and_exit("Error\nmlx_window not allocated.");
	assign_image(info);
	list_to_window(info);
}
