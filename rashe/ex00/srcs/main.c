/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 19:55:09 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 23:13:00 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(int argc, char **argv)
{
	char	buffer[4097];
	int		line;
	int		column;
	int		n;

	(void)argv;
	(void)argc;
	line = 0;
	column = 0;
	n = 0;
	n = read(0, buffer, 4096);
	buffer[n] = '\0';
	if (buffer[0] == '\0')
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	ft_line_column(buffer, &line, &column);
	ft_for_print(ft_check(buffer, line, column), line, column);
	return (0);
}
