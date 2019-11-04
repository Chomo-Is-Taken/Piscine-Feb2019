/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:55:46 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 17:14:23 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int result = 0;

int ft_check_threat(int *board, int col, int i)
{
	int prev_col;

	prev_col = 0;
	if (col != 0)
	{
		while (prev_col < col)
		{
		if (board[prev_col] == i)
			return (0);
		else if (board[prev_col] - (col - prev_col )== i)
			return (0);
		else if (board[prev_col] + (col - prev_col) == i)
			return (0);
		prev_col++;
		}
	}
	return (1);
}

void ft_placing(int *board, int col)
{
	int i;
	i = 0;
	if (col >= 8)
		result++;
	else
	{
		while (i < 8)
		{
			if (ft_check_threat(board, col, i))
			{
				board[col] = i;
				ft_placing(board, col + 1);
			}
			i++;
		}
	}
}

int ft_eight_queens_puzzle(void)
{
	int board[8];
	int res;
	ft_placing(board, 0);
	res = result;
	result = 0;
	return res;
}

int main()
{
	printf("%d ", ft_eight_queens_puzzle());
}
