/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:38:08 by toueis            #+#    #+#             */
/*   Updated: 2019/02/24 23:09:01 by toueis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_line_column(char *buffer, int *a, int *b);
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	rush(int x, int y);
int		ft_check(char *buffer, int x, int y);
void	ft_print(int i, int x, int y);
int		ft_colle00(char *buffer, int x, int y);
int		ft_colle01(char *buffer, int x, int y);
int		ft_colle02(char *buffer, int x, int y);
int		ft_colle03(char *buffer, int x, int y);
int		ft_colle04(char *buffer, int x, int y);
int		ft_strcmp(char *s1, char *s2);
void	ft_for_print(int i, int x, int y);
void	ft_print01(int i, int x, int y);
void	ft_print02(int i, int x, int y);
void	ft_print03(int i, int x, int y);
void	ft_print04(int i, int x, int y);
void	ft_print05(int i, int x, int y);
void	ft_print06(int i, int x, int y);
void	ft_print07(int i, int x, int y);
void	ft_print08(int i, int x, int y);
void	ft_print09(int i, int x, int y);
void	ft_extension00(char *tab, int y, int x);
void	ft_extension01(char *tab, int y, int x);
void	ft_extension02(char *tab, int x, int y);
void	ft_extension03(char *tab, int y, int x);
void	ft_extension04(char *tab, int y, int x);
void	ft_putnbr(int nb);

#endif
