/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:53:53 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/27 11:18:24 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		while (**tab)
		{
			ft_putchar(**tab);
			(*tab)++;
		}
		ft_putchar('\n');
		tab++;
	}
}
