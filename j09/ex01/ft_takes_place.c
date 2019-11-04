/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:43:57 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/15 12:34:29 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_extend(int hour)
{
	printf("AND ");
	if (hour == 24 || hour == 0)
		printf("12.00 A.M.\n");
	else if (hour < 12)
		printf("%d.00 A.M.\n", hour);
	else if (hour == 12)
		printf("12.00 P.M.\n");
	else if (hour > 12)
	{
		hour = hour % 12;
		printf("%d:00 P.M.\n", hour);
	}
}

void	ft_takes_place(int hour)
{
	int x;

	x = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. ");
	else if (hour > 0 && hour < 12)
		printf("%d.00 A.M. ", hour);
	else if (hour == 12)
		printf("12.00 P.M. ");
	else if (hour > 12)
	{
		hour = hour % 12;
		printf("%d.00 P.M. ", hour);
	}
	ft_extend(x + 1);
}
