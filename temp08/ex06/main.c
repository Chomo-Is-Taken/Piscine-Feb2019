/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:39:54 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/28 19:09:06 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"
#include <stdlib.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);
void				ft_putchar(char c)
{
	write(1, &c, 1);
}

int					main(int argc, char **argv)
{
	struct s_stock_par	*stock;

	stock = ft_param_to_tab(argc, argv);
	ft_show_tab(stock);
	return (0);
}
