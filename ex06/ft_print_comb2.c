/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuzawa <skuzawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:49:17 by skuzawa           #+#    #+#             */
/*   Updated: 2021/02/19 21:15:42 by skuzawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	temp2(char a, char b, char c, char d)
{
	char cc;
	char dd;

	cc = c;
	dd = d;
	while (cc <= '9')
	{
		while (dd <= '9')
		{
			ft_putchar(a, b);
			ft_putchars(' ');
			ft_putchar(cc, dd);
			if (a != '9' || b != '8' || cc != '9' || dd != '9')
				ft_putchar(',', ' ');
			dd += 1;
		}
		dd = '0';
		cc += 1;
	}
}

void	temp1(char l, char r)
{
	char t;
	char s;

	t = l;
	s = r;
	if (s != '9')
		temp2(t, s, t, s + 1);
	else
		temp2(t, s, t + 1, '0');
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			temp1(a, b);
			b += 1;
		}
		a += 1;
	}
}
