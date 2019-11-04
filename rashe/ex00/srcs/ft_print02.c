/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 14:46:13 by jcharrou          #+#    #+#             */
/*   Updated: 2019/02/24 20:03:28 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print02(int i, int x, int y)
{
	char line;
	char column;

	line = y;
	column = x;
	if (i == 2)
	{
		write(1, "[colle-01] [", 12);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "]\n", 2);
	}
}
