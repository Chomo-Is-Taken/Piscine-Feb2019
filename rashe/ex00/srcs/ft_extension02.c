/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extension02.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:49:48 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 22:11:02 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_extension02(char *tab, int y, int x)
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
			if ((i == 0 && j == 0) || (i == 0 && j == (x - 1)))
				tab[index++] = 'A';
			else if ((i == (y - 1) && j == 0) || (i == (y - 1) && j == (x - 1)))
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
