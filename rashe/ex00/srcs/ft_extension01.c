/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extension01.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:48:34 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 20:54:48 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_extension01(char *tab, int y, int x)
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
			if ((i == 0 && j == 0) || (i == (y - 1) && j == (x - 1)))
				tab[index++] = '/';
			else if ((i == 0 && j == (x - 1)) || (i == (y - 1) && j == 0))
				tab[index++] = '\\';
			else if (i == 0 || i == (y - 1) || j == 0 || j == (x - 1))
				tab[index++] = '*';
			else
				tab[index++] = ' ';
		}
		tab[index++] = '\n';
	}
	tab[index++] = '\0';
}
