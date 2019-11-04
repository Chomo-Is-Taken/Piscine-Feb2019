/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 19:16:01 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 19:16:13 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putnbr(int nb)
{
	unsigned int my_number;

	if (nb < 0)
	{
		ft_putchar('-');
		my_number = -nb;
	}
	else
		my_number = nb;
	if (my_number >= 10)
		ft_putnbr(my_number / 10);
	ft_putchar(my_number % 10 + '0');
}
