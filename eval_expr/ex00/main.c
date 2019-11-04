/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 18:30:03 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/24 13:17:06 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_fct.h"
#include "include/eval_expr.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
