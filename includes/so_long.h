/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:34:41 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/24 15:34:42 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# include "get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"

# define PIXEL_SIZE 32

# define IMG_WALL		"images/wall.xpm"
# define IMG_EXIT		"images/tresure.xpm"
# define IMG_GRASS		"images/grass.xpm"
# define IMG_COLLECTION	"images/enemy.xpm"
# define IMG_PLAYER2	"images/brave_father.xpm"
# define IMG_PLAYER		"images/brave.xpm"

# define KEY_PRESS 2
# define EXPOSE_E 12
# define DESTROY_NOTIFY 17

typedef struct s_map
{
	int		width;
	int		height;
	int		player_count;
	int		collect_count;
	int		exit_count;
	t_list	*tmp_list;
	char	**map;
}	t_map;

typedef struct s_player
{
	int	position_x;
	int	position_y;
	int	pedometer;
	int	collect_count;
	int	c_x;
	int	c_y;
	int	n_x;
	int	n_y;
}	t_player;

typedef struct s_image
{
	void	*player;
	void	*collected_player;
	void	*wall;
	void	*collection;
	void	*exit;
	void	*empty;
	int		image_size;
}	t_image;

typedef struct s_info
{
	void		*mlx;
	void		*mlx_win;
	t_map		map_info;
	t_player	player_info;
	t_image		images;
	char		*filename;
}	t_info;

void	check_filename(char *filename);
void	error_and_exit(char *msg);
void	read_map(t_info *info);
void	input_player_position(t_info *info);
void	list_to_array(t_info *info);
void	check_map(t_info *info);
void	display_map(t_info *info);
void	check_lst_null(t_info *info);
void	list_to_window(t_info *info);
void	move_player(t_info *info, int keycode);
void	set_event(t_info *info);

#endif
