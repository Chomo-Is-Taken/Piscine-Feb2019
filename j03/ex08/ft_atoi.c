/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 12:02:23 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/17 16:08:28 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test(int i, char *str)
{
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int						i;
	int						sign;
	unsigned	int			result;

	i = 0;
	sign = 1;
	result = 0;
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
