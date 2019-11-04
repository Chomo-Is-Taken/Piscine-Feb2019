/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:39:24 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 15:47:34 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_pow(int nb, int power)
{
	int number;

	number = nb;
	if (power < 0)
		return (0);
	else if (power == 0  && nb < 0)
		return (-1);
	else if (power == 0)
		return (1);
	else
	{
		while(power != 1)
		{
			nb = nb * number;
			power--;
		}
	}
	return (nb);
}

int main()
{
	printf("%d",ft_iterative_pow(-15615,0));
	return (0);
}
