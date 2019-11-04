/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:27:35 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:27:38 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

char	*ft_strrealloc(char *str, int len)
{
	char	*new;

	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	new[0] = '\0';
	ft_strcpy(new, str);
	free(str);
	return (new);
}

void	ft_error(void)
{
	ft_putstr("map error\n");
	exit(EXIT_FAILURE);
}

int		ft_getlen(char *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	*ft_strduptil(char *str, char stop, int *pos)
{
	char	*dest;
	int		i;

	i = 0;
	*pos += ft_getlen(str, '\n') + 1;
	if (!(dest = (char*)malloc(sizeof(char) * (ft_getlen(str, '\n') + 1))))
		return (NULL);
	while (str[i] && str[i] != stop)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	if (str[i] != stop)
		return (NULL);
	return (dest);
}

void	ft_line(char **grid, t_map *map)
{
	int		i;
	int		done;

	i = 0;
	done = 0;
	while (grid[i])
	{
		if (grid[i][0] == map->vide && done == 0)
		{
			done = 1;
			ft_putchar(map->square);
		}
		else
			ft_putchar(grid[i][0]);
		ft_putchar('\n');
		i++;
	}
}
