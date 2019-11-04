/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 10:53:59 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 23:21:05 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_fct.h"
#include "include/eval_expr.h"

int		ft_detect_number(char **strnb)
{
	int number;

	while (**strnb == ' ')
		(*strnb)++;
	if (**strnb == '(')
	{
		(*strnb)++;
		number = ft_detect_sum(strnb);
		if (**strnb == ')')
			(*strnb)++;
		return (number);
	}
	return (ft_fake_atoi(strnb));
}

int		ft_detect_operators(char **strnb)
{
	int		number;
	int		number_2;
	char	operator;

	number = ft_detect_number(strnb);
	while (**strnb)
	{
		while (**strnb == ' ')
			(*strnb)++;
		operator = **strnb;
		if (operator != '/' && operator != '*' && operator != '%')
			return (number);
		(*strnb)++;
		number_2 = ft_detect_number(strnb);
		if (operator == '/')
			number = number / number_2;
		else if (operator == '*')
			number = number * number_2;
		else
			number = number % number_2;
	}
	return (number);
}

int		ft_detect_sum(char **strnb)
{
	int		number;
	int		number_2;
	char	operator;

	number = ft_detect_operators(strnb);
	while (**strnb)
	{
		while (**strnb == ' ')
			(*strnb)++;
		operator = **strnb;
		if (operator != '+' && operator != '-')
			return (number);
		(*strnb)++;
		number_2 = ft_detect_operators(strnb);
		if (operator == '+')
			number = number + number_2;
		else
			number = number - number_2;
	}
	return (number);
}

int		eval_expr(char *expr)
{
	return (ft_detect_sum(&expr));
}
