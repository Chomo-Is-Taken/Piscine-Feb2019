/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:13:22 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/14 18:52:54 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

int		ft_check_threat(int *board, int col, int i)
{
	int prev_col;

	prev_col = 0;
	if (col != 0)
	{
		while (prev_col < col)
		{
			if (board[prev_col] == i)
				return (0);
			else if (board[prev_col] - (col - prev_col) == i)
				return (0);
			else if (board[prev_col] + (col - prev_col) == i)
				return (0);
			prev_col++;
		}
	}
	return (1);
}

void	ft_placing(int *board, int col)
{
	int i;

	i = 0;
	if (col >= 8)
	{
		while (i < 8)
		{
			ft_putchar(board[i] + '1');
			i++;
		}
		ft_putchar('\n');
	}
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

void	ft_eight_queens_puzzle_2(void)
{
	int board[8];

	ft_placing(board, 0);
}
