/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:10 by kiijima           #+#    #+#             */
/*   Updated: 2022/06/20 23:06:55 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(int n)
{
	size_t	i;
	int		j;

	i = 0;
	if (n == 0)
		return (1);
	j = n;
	while (j)
	{
		i++;
		j /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	size_t	i;
	char	*str;

	digits = count_digits(n);
	if (n < 0)
		digits++;
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	*(str + digits) = '\0';
	i = 0;
	if (n < 0)
	{
		*(str + i++) = '-';
		*(str + --digits) = ((n % 10) * -1) + '0';
		n /= -10;
	}
	while (i < digits)
	{
		*(str + --digits) = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
