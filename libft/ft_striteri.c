/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:53:04 by kiijima           #+#    #+#             */
/*   Updated: 2022/07/21 11:43:57 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	if (UINT_MAX < ft_strlen(s))
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

void	f(unsigned int i, char *s)
{
	(*s += i);
}

// int main()
// {
// 	char s[] = "0000000";
// 	ft_striteri(s, f);
// 	printf("%s\n",s);
// }
