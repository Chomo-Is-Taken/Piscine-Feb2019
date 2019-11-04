/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:08:06 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 16:35:54 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (number < nb)
	{
		i++;
		if (i > 47000)
			return (0);
		number = i * i;
	}
	if (number - nb == 0)
		return (i);
	else
		return (0);
}

int main()
{
	printf("%d",ft_sqrt(2147395600));
	return (0);
}
