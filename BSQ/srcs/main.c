/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:27:59 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:28:03 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		ft_cases(char **grid, t_map *map)
{
	int		stop;

	stop = 0;
	if (map->nb_lines == 1 && map->nb_cols == 1 && ++stop)
	{
		if (grid[0][0] == map->full)
			return (1);
		ft_putchar(map->square);
		ft_putchar('\n');
	}
	else if (map->nb_cols == 1 && map->nb_lines > 1 && ++stop == 1)
		ft_line(grid, map);
	else if (map->nb_cols > 1 && map->nb_lines == 1 && ++stop == 1)
		ft_cols(grid, map);
	if (stop > 0)
		return (1);
	return (0);
}

int		ft_bsq(char *file_name, int file_d)
{
	char	**grid;
	char	*input;
	t_map	map;
	int		fd;

	if (file_d == 0)
		fd = 0;
	else if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	if (fd != -1)
		if ((ft_parsing(fd, file_name, &map) == 1))
			return (0);
	if (!(input = ft_getgrid(fd, &map)))
		return (0);
	if (!(grid = ft_gettab(input, &map)))
		return (0);
	if (ft_check_without(grid, &map) == 1)
		return (0);
	if ((ft_cases(grid, &map) == 1))
		return (0);
	if (ft_solve(grid, &map) == 0)
		return (0);
	return (1);
}

void	ft_input(int ac, char **av, int fd)
{
	int		i;

	i = 1;
	if (ac == 1 && fd == 0)
	{
		if (ft_bsq(NULL, fd) == 0)
			ft_putstr("map error\n");
		return ;
	}
	while (i < ac)
	{
		if (ft_bsq(av[i], fd) == 0)
			ft_putstr("map error\n");
		if (i != ac - 1)
			ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_input(argc, argv, -1);
	else
		ft_input(argc, argv, 0);
	return (0);
}
