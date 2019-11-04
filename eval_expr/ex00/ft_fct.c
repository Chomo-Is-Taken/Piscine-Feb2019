/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 23:13:58 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 22:35:02 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		number = -nb;
	}
	if (number / 10 > 0)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}

int		ft_fake_atoi(char **strnb)
{
	int	result;

	result = 0;
	while (**strnb >= '0' && **strnb <= '9')
	{
		result = (result * 10 + **strnb - '0');
		(*strnb)++;
	}
	return (result);
}
