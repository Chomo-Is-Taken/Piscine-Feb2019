/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:00:34 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 16:38:02 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i =2;
	if (nb < 0)
		return (0);
	while (i < nb && i < 46342)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	i = ft_is_prime(nb);
	if (i == 1)
	{
		return (nb);
	}
	else
	{
		return(ft_find_next_prime(nb + 1));
	}
}

int main()
{
	printf("%d",ft_find_next_prime(2147483647));
	return (0);
}
