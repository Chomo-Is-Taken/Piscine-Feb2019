/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:02:56 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 16:43:51 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
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
