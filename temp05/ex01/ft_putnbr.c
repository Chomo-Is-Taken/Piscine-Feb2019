/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:09:18 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/12 17:29:02 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int value;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	value = nb;
	if ( value / 10 > 0)
	{
		ft_putnbr(value / 10);
	}
	ft_putchar(value % 10 + '0');
}

int main()
{
	ft_putnbr(47483648);
	return (0);
}
