/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extension03.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:15:45 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 21:27:38 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_extension03(char *tab, int y, int x)
{
	int index;
	int i;
	int j;

	i = -1;
	index = 0;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if ((i == 0 && j == 0) || (i == (y - 1) && j == 0))
				tab[index++] = 'A';
			else if ((i == 0 && j == (x - 1)) || (i == (y - 1) && j == (x - 1)))
				tab[index++] = 'C';
			else if (i == 0 || i == (y - 1) || j == 0 || j == (x - 1))
				tab[index++] = 'B';
			else
				tab[index++] = ' ';
		}
		tab[index++] = '\n';
	}
	tab[index++] = '\0';
}
