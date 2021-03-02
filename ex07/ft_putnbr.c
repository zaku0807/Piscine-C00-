/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuzawa <skuzawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:28:25 by skuzawa           #+#    #+#             */
/*   Updated: 2021/02/21 22:23:04 by skuzawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_example(void)
{
	int		i;
	char	t[12];

	i = 0;
	t[0] = '-';
	t[1] = '2';
	t[2] = '1';
	t[3] = '4';
	t[4] = '7';
	t[5] = '4';
	t[6] = '8';
	t[7] = '3';
	t[8] = '6';
	t[9] = '4';
	t[10] = '8';
	while (i <= 10)
	{
		ft_putchar(t[i]);
		i += 1;
	}
	return ;
}

void		output(int p, char *q, int j)
{
	int i;

	i = p - 1;
	if (j == -1)
		ft_putchar('-');
	while (i >= 0)
	{
		ft_putchar(q[i]);
		i -= 1;
	}
}

void		ft_judge(int x, int z)
{
	int		i;
	char	y[14];
	char	t;

	i = 0;
	while (x > 0)
	{
		t = x % 10;
		y[i] = t + '0';
		x /= 10;
		i += 1;
	}
	output(i, y, z);
}

void		ft_putnbr(int nb)
{
	int ans;
	int ch;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb == -2147483648)
	{
		ft_example();
		return ;
	}
	if (nb < 0)
	{
		ans = -nb;
		ch = -1;
	}
	else
	{
		ans = nb;
		ch = 1;
	}
	ft_judge(ans, ch);
}
