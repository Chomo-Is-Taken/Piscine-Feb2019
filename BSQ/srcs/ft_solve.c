/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:26:54 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:26:57 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		ft_place_first(char **grid, t_map *map)
{
	int		i;
	int		j;
	int		s;

	s = 0;
	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			ft_putchar((grid[i][j] == map->vide &&
						++s == 1) ? map->square : grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (1);
}

int		ft_make_square(char **grid, t_point *best, t_map *map)
{
	int		i;
	int		j;

	i = best->y;
	if (best->size == 1)
		return (ft_place_first(grid, map));
	if ((map->nb_lines == 2 && map->nb_cols == 2))
		return (ft_two(grid, best, map));
	if ((map->nb_lines == 3 && map->nb_cols == 3))
		if (best->size == 1)
			return (ft_print_three(grid, best, map));
	while (i - best->y < best->size)
	{
		j = best->x;
		while (j - best->x < best->size)
		{
			grid[i][j] = map->square;
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_square(char **grid, int x, int y, t_map *map)
{
	int		i;
	int		j;

	i = y;
	j = x;
	while (i <= y + map->yet)
	{
		j = x;
		while (j <= x + map->yet)
		{
			if (grid[i][j] == map->full)
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int		ft_do_check(char **grid, int x, int y, t_map *map)
{
	if (x + map->yet >= map->nb_cols)
		return (0);
	if (y + map->yet >= map->nb_lines)
		return (0);
	if (grid[y][x] == map->full)
		return (0);
	return (1);
}

int		ft_solve(char **grid, t_map *map)
{
	t_point	best;
	int		x;
	int		y;

	y = 0;
	map->yet = 1;
	best.size = 1;
	while (y < map->nb_lines - map->yet + 1)
	{
		x = -1;
		while (++x < map->nb_cols - map->yet + 1)
			while (ft_do_check(grid, x, y, map) == 1 &&
					ft_check_square(grid, x, y, map) == 1)
			{
				best.x = x;
				best.y = y;
				map->yet++;
				best.size = map->yet;
			}
		y++;
	}
	if ((ft_make_square(grid, &best, map) == 1))
		return (1);
	ft_puttab(grid);
	return (1);
}
