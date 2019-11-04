/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:50:36 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/28 20:03:42 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}			t_stock_par;

void		ft_show_tab(struct s_stock_par *par);

t_stock_par	*ft_param_to_tab(int ac, char **av);

void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_print_words_tables(char **tab);
char		**ft_split_whitespaces(char *str);

#endif
