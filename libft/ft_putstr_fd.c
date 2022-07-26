/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:54:00 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/20 19:56:55 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	if (INT_MAX < len)
		len = len - write(fd, s, len);
	write(fd, s, len);
}

// int main()
// {
// 	int fd = open("putstr_file", O_RDWR | O_CREAT);
// 	if (fd == -1)
// 	{
// 		perror("error!");
//         exit(EXIT_FAILURE);
// 	}
// 	printf("%d\n",fd);
// 	ft_putstr_fd("abcde", fd);

//     close(fd);
//     exit(EXIT_SUCCESS);
// }
