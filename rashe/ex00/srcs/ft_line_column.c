/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_column.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toueis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:57:42 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 23:10:21 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_line_column(char *buffer, int *a, int *b)
{
	int i;
	int column;
	int line;

	i = 0;
	column = 0;
	line = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			line++;
		i++;
	}
	i = 0;
	while (buffer[i] != '\n')
	{
		column++;
		i++;
	}
	*a = line;
	*b = column;
}
