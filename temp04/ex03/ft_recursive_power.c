/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:51:51 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 16:19:52 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && nb < 0)
		return (-1);
	else if (power == 0)
		return (1);
	else
	{
		while (power != 1)
			return (nb * ft_recursive_power(nb,power-1));
	}
	return (nb);
}

int main()
{
	printf("%d",ft_recursive_power(-1623,0));
	return (0);
}
