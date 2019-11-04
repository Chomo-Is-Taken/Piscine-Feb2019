/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:06:35 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/27 14:39:59 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *mashallah;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((mashallah = malloc(sizeof(*mashallah) * (max - min))) == NULL)
		return (NULL);
	while (min < max)
	{
		mashallah[i] = min;
		min++;
		i++;
	}
	return (mashallah);
}
