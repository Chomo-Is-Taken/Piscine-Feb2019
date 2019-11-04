/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:27:47 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:27:50 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

void	ft_cols(char **grid, t_map *map)
{
	int		i;
	int		done;

	i = 0;
	done = 0;
	while (grid[0][i])
	{
		if (grid[0][i] == map->vide && done == 0)
		{
			done = 1;
			ft_putchar(map->square);
		}
		else
			ft_putchar(grid[0][i]);
		i++;
	}
	ft_putchar('\n');
}
