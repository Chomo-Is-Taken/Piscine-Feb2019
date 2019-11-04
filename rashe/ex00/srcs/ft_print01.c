/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:12:56 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 19:27:33 by jcharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print01(int i, int x, int y)
{
	char line;
	char column;

	line = y;
	column = x;
	if (i == 1)
	{
		write(1, "[colle-00] [", 12);
		ft_putnbr(line);
		write(1, "] [", 3);
		ft_putnbr(column);
		write(1, "]\n", 2);
	}
}
