/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print08.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 14:38:05 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 20:04:59 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print08(int i, int x, int y)
{
	char line;
	char column;

	line = y;
	column = x;
	if (i == 8)
	{
		write(1, "[colle-03] [", 12);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "] ||", 4);
		write(1, " [colle-04] [", 13);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "]\n", 2);
	}
}
