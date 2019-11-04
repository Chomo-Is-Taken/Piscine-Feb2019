/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print05.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:06:32 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 20:04:12 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print05(int i, int x, int y)
{
	char line;
	char column;

	line = y;
	column = x;
	if (i == 5)
	{
		write(1, "[colle-04] [", 12);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "]\n", 2);
	}
}
