/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:59:27 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/21 19:49:28 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_str_yolo(char *tab, int argc, char **argv)
{
	int i;
	int j;
	int x;

	j = 1;
	i = 0;
	while (j < argc)
	{
		x = 0;
		while (argv[j][x] != 0)
		{
			tab[i] = argv[j][x];
			x++;
			i++;
		}
		if (j + 1 != argc)
			tab[i] = '\n';
		else
			tab[i] = '\0';
		i++;
		j++;
	}
}

int		ft_count(char **argv, int argc)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 1;
	while (x < argc)
	{
		j = 0;
		while (argv[x][j])
		{
			i++;
			j++;
		}
		x++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		size;
	char	*tab;
	int		mashalla;

	i = 0;
	mashalla = argc;
	size = ft_count(argv, argc);
	if (argc != 0)
	{
		if ((tab = malloc(sizeof(*tab) * (size + mashalla))) == NULL)
			return (NULL);
		ft_str_yolo(tab, argc, argv);
		return (tab);
	}
	else
		return (0);
}
