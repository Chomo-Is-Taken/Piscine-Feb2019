/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:02:20 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/06 18:07:51 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_verif(int a, int b, int c)
{
	int bol;

	bol = 1;
	if ((a <= b) || (b <= c) || (a <= c))
		bol = 0;
	if ((bol == 1) && (c * 100 + b * 10 + a != 789))
	{
		ft_putchar(c + '0');
		ft_putchar(b + '0');
		ft_putchar(a + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
	if ((bol == 1) && (c * 100 + b * 10 + a == 789))
	{
		ft_putchar(c + '0');
		ft_putchar(b + '0');
		ft_putchar(a + '0');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (i <= 999)
	{
		i++;
		ft_print_verif(a, b, c);
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
	}
}
