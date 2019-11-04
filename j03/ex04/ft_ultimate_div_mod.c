/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 16:32:54 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/18 17:27:26 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

int main()
{
	int x;
	int y;
	int *a = &x;
	int *b = &y;
	x = 12;
	y = 5;

	ft_ultimate_div_mod(a, b);
	printf("x = %d\ny = %d",x,y);
}
