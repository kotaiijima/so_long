/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:33:37 by kiijima           #+#    #+#             */
/*   Updated: 2022/05/20 19:57:37 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c);
long long	ft_isoverflow(long long current, int sign);

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	re_nb;
	int			sign;

	i = 0;
	re_nb = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isdigit(str[i]))
	{
		re_nb = (re_nb * 10) + (str[i] - '0');
		i++;
	}
	if (ft_isoverflow(re_nb, sign) != 1)
		return (ft_isoverflow(re_nb, sign));
	return (re_nb * sign);
}

int	ft_isspace(int c)
{
	return ((c == '\t' || c == '\n' || c == '\v' || \
					c == '\f' || c == '\r' || c == ' '));
}

long long	ft_isoverflow(long long current, int sign)
{
	if (sign == 1)
	{
		if (INT_MAX < current)
			return (LONG_MAX);
	}
	else if (sign == -1)
	{
		if (INT_MIN > current)
			return (LONG_MIN);
	}
	return (1);
}

// int main(int argc, char **argv){
// 	printf("ft :%d\n",ft_atoi(argv[1]));
// 	printf("org:%d\n",atoi(argv[1]));
// 	(void)argc;
// }
