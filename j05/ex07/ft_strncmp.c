/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:58:50 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 16:04:17 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while ((s1[index] == s2[index] && (s1[index] != '\0' || s2[index] != '\0')))
	{
		if (index == n)
			return (0);
		index++;
	}
	return (s1[index] - s2[index]);
}
