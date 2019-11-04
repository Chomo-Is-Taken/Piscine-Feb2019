/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:02:56 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 15:41:34 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	{
		int i;
		int temp;

		if (nb < 0)
			return (0);
		else if (nb > 12)
			return (0);
		else if (nb == 0)
			return (1);
		else
		{
			i = 1;
			temp = nb;
			while (i < temp)
			{
				nb = nb * i;
				i++;
			}
		}
		return (nb);
	}
}

int main()
{
	printf("The factorial of %d is %d", -13,ft_iterative_factorial(-12));
}
