/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:06:35 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/21 17:13:04 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *mashalla;

	i = min;
	j = 0;
	while (i < max)
		i++;
	if (min > max)
		return (NULL);
	else if ((mashalla = malloc(sizeof(*mashalla) * (i))) == NULL)
		return (NULL);
	while (j < i)
	{
		mashalla[j] = min;
		min++;
		j++;
	}
	return (mashalla);
}
