/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:00:32 by jcharrou          #+#    #+#             */
/*   Updated: 2019/02/24 20:03:45 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print03(int i, int x, int y)
{
	char line;
	char column;

	line = y;
	column = x;
	if (i == 3)
	{
		write(1, "[colle-02] [", 12);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "]\n", 2);
	}
}
