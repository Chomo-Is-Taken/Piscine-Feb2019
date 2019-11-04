/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:19:33 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 18:47:50 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_for_print(int i, int x, int y)
{
	if (i == 1)
		ft_print01(i, x, y);
	if (i == 2)
		ft_print02(i, x, y);
	if (i == 3)
		ft_print03(i, x, y);
	if (i == 4)
		ft_print04(i, x, y);
	if (i == 5)
		ft_print05(i, x, y);
	if (i == 6)
		ft_print06(i, x, y);
	if (i == 7)
		ft_print07(i, x, y);
	if (i == 8)
		ft_print08(i, x, y);
	if (i == 9)
		ft_print09(i, x, y);
	return ;
}
