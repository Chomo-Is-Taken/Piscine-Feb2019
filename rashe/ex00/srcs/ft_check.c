/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:12:14 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 22:22:15 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_check(char *buffer, int x, int y)
{
	if (ft_colle02(buffer, x, y) == 1 && (ft_colle03(buffer, x, y) == 1)
			&& (ft_colle04(buffer, x, y) == 1))
		return (9);
	else if (ft_colle03(buffer, x, y) == 1 && (ft_colle04(buffer, x, y) == 1))
		return (8);
	else if (ft_colle02(buffer, x, y) == 1 && (ft_colle04(buffer, x, y) == 1))
		return (7);
	else if (ft_colle02(buffer, x, y) == 1 && (ft_colle03(buffer, x, y) == 1))
		return (6);
	else if (ft_colle00(buffer, x, y) == 1)
		return (1);
	else if (ft_colle01(buffer, x, y) == 1)
		return (2);
	else if (ft_colle02(buffer, x, y) == 1)
		return (3);
	else if (ft_colle03(buffer, x, y) == 1)
		return (4);
	else if (ft_colle04(buffer, x, y) == 1)
		return (5);
	write(1, "aucune\n", 7);
	return (0);
}
