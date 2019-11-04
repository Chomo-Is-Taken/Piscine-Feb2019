/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:26:03 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:26:07 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		ft_check_without(char **grid, t_map *map)
{
	int		i;
	int		j;
	int		full;

	i = 0;
	full = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] != map->full && grid[i][j] != map->vide)
				return (0);
			if (grid[i][j] == map->vide)
				full = 1;
			j++;
		}
		i++;
	}
	if (full == 1)
		return (0);
	return (1);
}

int		ft_parsing(int fd, char *file_name, t_map *map)
{
	char	fl[1024];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (read(fd, &fl[i], 1) > 0 && fl[i] != '\n')
		i++;
	fl[i] = '\0';
	if (ft_parse_fl(fl) == 1 || i == 0)
		return (1);
	while (fl[j] >= '0' && fl[j] <= '9')
		j++;
	if (ft_strlen(&fl[j]) != 3)
		return (1);
	map->vide = fl[j];
	map->full = fl[j + 1];
	map->square = fl[j + 2];
	if (j + 3 < i && fl[j + 3] != '\0')
		return (1);
	fl[j] = '\0';
	if ((map->nb_lines = ft_atoi(fl)) == 0)
		return (1);
	return (0);
}

char	*ft_getgrid(int fd, t_map *map)
{
	char	*dest;
	char	buff[BUFF_SIZE + 1];
	int		i;
	int		ret;

	i = 1;
	if (!(dest = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (NULL);
	dest[0] = '\0';
	if (read(fd, buff, 0) < 0)
		return (NULL);
	while ((ret = read(fd, buff, BUFF_SIZE)) == BUFF_SIZE)
	{
		buff[BUFF_SIZE] = '\0';
		dest = ft_strcat(dest, buff);
		dest = ft_strrealloc(dest, (i + 1) * BUFF_SIZE);
		i++;
	}
	buff[ret] = '\0';
	if (ret == -1)
		return (NULL);
	dest = ft_strcat(dest, buff);
	return (dest);
}

char	**ft_gettab(char *input, t_map *map)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	map->nb_cols = ft_getlen(input, '\n');
	if (!(dest = (char**)malloc(sizeof(char*) * (map->nb_lines + 1))))
		return (NULL);
	while (j < map->nb_lines)
	{
		if (!(dest[j] = ft_strduptil((i == 0) ? input : &input[i], '\n', &i)))
			return (NULL);
		if (ft_strlen(dest[j]) != map->nb_cols)
			return (NULL);
		j++;
	}
	free(input);
	dest[j] = NULL;
	if (input[i] != '\0' && (ft_strlen(input) < 2 || input[i + 1] != '\0'))
		return (NULL);
	return (dest);
}

int		ft_parse_fl(char fl[BUFF_SIZE])
{
	int		i;

	i = ft_strlen(fl);
	if (fl[i - 1] == fl[i - 2] || fl[i - 1] == fl[i - 3])
		return (1);
	if (fl[i - 2] == fl[i - 3])
		return (1);
	i -= 4;
	while (i >= 0)
	{
		if (fl[i] < '0' || fl[i] > '9')
			return (1);
		i--;
	}
	return (0);
}
