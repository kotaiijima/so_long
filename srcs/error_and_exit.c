/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:52:53 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/19 20:06:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error_and_exit(char *msg)
{
	ft_putendl_fd(msg, STDERR_FILENO);
	exit (EXIT_FAILURE);
}
