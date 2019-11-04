/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:50:35 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/28 19:12:18 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	unsigned int value;

	if (nb < 0)
	{
		value = nb * -1;
		ft_putchar('-');
	}
	else
		value = nb;
	if (value / 10 > 0)
	{
		ft_putnbr(value / 10);
	}
	ft_putchar(value % 10 + '0');
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		while (**tab)
		{
			ft_putchar(**tab);
			(*tab)++;
		}
		ft_putchar('\n');
		tab++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].copy[j])
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
