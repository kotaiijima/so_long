/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:55:08 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/23 17:56:21 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i >= 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((i % 10) + '0', fd);
}

// int main()
// {
// 	int fd = open("putnbr_file", O_RDWR | O_CREAT);
// 	if (fd == -1)
// 	{
// 		perror("error!");
//         exit(EXIT_FAILURE);
// 	}
// 	printf("%d\n",fd);
// 	ft_putnbr_fd(12345, fd);

//     close(fd);
//     exit(EXIT_SUCCESS);
// }
