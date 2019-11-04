/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:27:04 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:27:11 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		ft_three(char **grid, t_point *best, t_map *map)
{
	int		i;

	i = -1;
	if (best->size == 2)
	{
		grid[best->y][best->x] = map->square;
		grid[best->y][best->x + 1] = map->square;
		grid[best->y + 1][best->x] = map->square;
		grid[best->y + 1][best->x + 1] = map->square;
	}
	else if (best->size == 3)
	{
		while (++i < 3)
		{
			ft_putchar(map->square);
			ft_putchar(map->square);
			ft_putchar(map->square);
			ft_putchar('\n');
		}
		return (1);
	}
	return (0);
}

int		ft_two(char **grid, t_point *best, t_map *m)
{
	int		s;

	s = 0;
	if (best->size == 2 && grid[best->y][best->x] == m->vide &&
			grid[best->y][best->x + 1] == m->vide &&
			grid[best->y + 1][best->x] == m->vide &&
			grid[best->y + 1][best->x + 1] == m->vide)
	{
		grid[best->y][best->x] = m->square;
		grid[best->y][best->x + 1] = m->square;
		grid[best->y + 1][best->x] = m->square;
		grid[best->y + 1][best->x + 1] = m->square;
	}
	else
	{
		ft_putchar(grid[0][0] == m->vide && ++s == 1 ? m->square : grid[0][0]);
		ft_putchar(grid[0][1] == m->vide && ++s == 1 ? m->square : grid[0][1]);
		ft_putchar('\n');
		ft_putchar(grid[1][0] == m->vide && ++s == 1 ? m->square : grid[1][0]);
		ft_putchar(grid[1][1] == m->vide && ++s == 1 ? m->square : grid[1][1]);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		ft_print_three(char **grid, t_point *best, t_map *m)
{
	int		s;

	s = 0;
	ft_putchar((grid[0][0] == m->vide && ++s == 1) ? m->square : grid[0][0]);
	ft_putchar((grid[0][1] == m->vide && ++s == 1) ? m->square : grid[0][1]);
	ft_putchar((grid[0][2] == m->vide && ++s == 1) ? m->square : grid[0][2]);
	ft_putchar('\n');
	ft_putchar((grid[1][0] == m->vide && ++s == 1) ? m->square : grid[1][0]);
	ft_putchar((grid[1][1] == m->vide && ++s == 1) ? m->square : grid[1][1]);
	ft_putchar((grid[1][2] == m->vide && ++s == 1) ? m->square : grid[1][2]);
	ft_putchar('\n');
	ft_putchar((grid[2][0] == m->vide && ++s == 1) ? m->square : grid[2][0]);
	ft_putchar((grid[2][1] == m->vide && ++s == 1) ? m->square : grid[2][1]);
	ft_putchar((grid[2][2] == m->vide && ++s == 1) ? m->square : grid[2][2]);
	ft_putchar('\n');
	return (0);
}
