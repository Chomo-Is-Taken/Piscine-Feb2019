/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extension00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:45:59 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 23:10:04 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_extension00(char *tab, int y, int x)
{
	int index;
	int i;
	int j;

	index = 0;
	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if ((j == 0 && i == 0) || (j == (x - 1) && i == 0)
					|| (j == 0 && i == (y - 1))
					|| (j == (x - 1) && i == (y - 1)))
				tab[index++] = 'o';
			else if (i == 0 || i == (y - 1))
				tab[index++] = '-';
			else if (j == 0 || j == (x - 1))
				tab[index++] = '|';
			else
				tab[index++] = ' ';
		}
		tab[index++] = '\n';
	}
	tab[index++] = '\0';
}
