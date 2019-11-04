/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 09:48:24 by jcharrou          #+#    #+#             */
/*   Updated: 2019/02/24 09:48:30 by jcharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_middle_rows_results(int width, int x)
{
	if ((width == 0) || (width == x - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_top_rows_results(int width, int x)
{
	if (width == 0)
	{
		ft_putchar('/');
	}
	else if (width == x - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_print_bottom_rows_results(int width, int x)
{
	if (width == 0)
	{
		ft_putchar('\\');
	}
	else if (width == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if (length == 0)
	{
		ft_print_top_rows_results(width, x);
	}
	else if (length == y - 1)
	{
		ft_print_bottom_rows_results(width, x);
	}
	else
	{
		ft_print_middle_rows_results(width, x);
	}
}

void	rush(int x, int y)
{
	int width;
	int length;

	if ((x > 0) && (y > 0))
	{
		length = 0;
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_length_print(length, y, x, width);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
