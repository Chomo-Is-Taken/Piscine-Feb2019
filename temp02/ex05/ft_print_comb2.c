/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 16:31:12 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/07 17:46:02 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_check(int a, int b)
{
	int x;

	x = 0;
	if (b >= a)
		x = 1;
	if ((x == 0) && (b * 100 + a != 9899))
	{
		ft_putchar(b / 10 % 10 + '0');
		ft_putchar(b % 10 + '0');
		ft_putchar(' ');
		ft_putchar(a / 10 % 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
	if ((x == 0) && (b * 100 + a == 9899))
	{
		ft_putchar(b / 10 % 10 + '0');
		ft_putchar(b % 10 + '0');
		ft_putchar(' ');
		ft_putchar(a / 10 % 10 + '0');
		ft_putchar(a % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int q;
	int p;

	q = 0;
	p = 0;
	while (q <= 98)
	{
		while (p <= 99)
		{
			ft_print_check(p, q);
			p++;
		}
		if ((p >= 99) && (q <= 98))
		{
			p = 0;
			q++;
		}
	}
}
