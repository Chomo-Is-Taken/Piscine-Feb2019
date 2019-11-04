/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:22:14 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/28 20:33:17 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*str_cpy;
	int		lenght;
	int		i;

	i = 0;
	lenght = ft_strlen(src);
	if ((str_cpy = malloc(sizeof(*str_cpy) * (lenght + 1))) == NULL)
		return (NULL);
	while (src[i])
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*params;

	i = 0;
	if ((params = malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (0);
	while (i < ac)
	{
		params[i].size_params = ft_strlen(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[i].str = 0;
	return (params);
}
