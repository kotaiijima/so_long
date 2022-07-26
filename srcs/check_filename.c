/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_filename.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:34:58 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/24 14:56:45 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_filename(char *filename)
{
	char	*dot_address;
	int		strncmp_ret;

	if (ft_strncmp(filename, "maps/.ber", 9) == 0)
		error_and_exit("Error\nfilename is bad.");
	dot_address = ft_strchr(filename, '.');
	if (dot_address == NULL)
		error_and_exit("Error\nfilename is bad.");
	strncmp_ret = ft_strncmp(dot_address, ".ber", 5);
	if (strncmp_ret != 0)
		error_and_exit("Error\nfilename is bad.");
}

void	check_lst_null(t_info *info)
{
	if (info->map_info.tmp_list->next == NULL)
		error_and_exit("Error\nfile is white line.");
}
