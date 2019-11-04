/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:16:17 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/27 18:19:08 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int *temp;

	if (min >= max)
	{
		return (0);
	}
	if ((temp = malloc(sizeof(*temp) * (max - min))) == NULL)
		return (0);
	j = 0;
	while (min < max)
		temp[j++] = min++;
	*range = temp;
	return (j);
}
