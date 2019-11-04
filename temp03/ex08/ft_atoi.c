/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 12:02:23 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/12 15:11:35 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_test(int i, char *str)
{
	while (str[i] <= 32)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	unsigned	int result;

	i = 0;
	result = 0;
	sign = 1;
	i = ft_test(i, str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main()
{
	printf("%d",atoi("-2147483648"));
	printf("%d",ft_atoi("-2147483648"));
}
