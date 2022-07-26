/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:53:36 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/19 18:37:47 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd = open("putchar_file", O_RDWR);
// 	if (fd == -1)
// 	{
// 		perror("error!");
//         exit(EXIT_FAILURE);
// 	}
// 	printf("%d\n",fd);
// 	ft_putchar_fd('a', fd);

//     close(fd);
//     exit(EXIT_SUCCESS);
// }
