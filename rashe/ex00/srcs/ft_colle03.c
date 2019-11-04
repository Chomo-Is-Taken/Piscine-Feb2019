/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:18:16 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 22:43:54 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_colle03(char *buffer, int x, int y)
{
	char	*tab;

	if ((tab = (char *)malloc(sizeof(*tab) * (x * y + 1))) == NULL)
		return (0);
	ft_extension03(tab, x, y);
	if (ft_strcmp(tab, buffer) == 0)
	{
		free(tab);
		return (1);
	}
	else
		return (0);
}
