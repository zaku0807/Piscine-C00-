/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuzawa <skuzawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:25:49 by skuzawa           #+#    #+#             */
/*   Updated: 2021/03/03 11:22:18 by skuzawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_shun(char *a, int n, int cnt, char temp)
{
	if (cnt == n)
	{
		ft_putstr(a);
		if (a[0] != (10 - n) + '0')
			write(1, " ", 1);
		return ;
	}
	a[cnt] = temp;
	while (a[cnt] <= '9')
	{
		ft_shun(a, n, cnt + 1, a[cnt] + 1);
		a[cnt]++;
	}
}

void	ft_print_combn(int n)
{
	char	a[15];
	int		cnt;

	cnt = 0;
	ft_shun(a, n, cnt, '0');
}
