/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:08:06 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 16:50:17 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
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
