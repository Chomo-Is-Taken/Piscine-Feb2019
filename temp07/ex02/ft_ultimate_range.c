/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:16:17 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/25 11:07:04 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *temp;
	int x;

	i = min;
	x = min;
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	while (i < max)
		i++;
	if ((temp = malloc(sizeof(*temp) * (i + 1))) == NULL)
		return (0);
	j = 0;
	while (j < i)
	{
		temp[j] = min;
		min++;
		j++;
	}
	*range = temp;
	return (j - x);
}
