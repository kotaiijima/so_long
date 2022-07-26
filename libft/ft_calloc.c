/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:10 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/10 17:09:11 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int	is_overflow(size_t count, size_t size)
{
	return ((size > SIZE_MAX / count) == 0);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*ptr;

	if (size == 0 || count == 0)
	{
		count = 1;
		size = 1;
	}
	if (is_overflow(count, size) == 0)
		return (NULL);
	n = count * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}
