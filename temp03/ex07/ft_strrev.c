/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 12:02:03 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/10 16:57:51 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tab[i];

	j = 0;
	i = ft_strlen(str);
	while (i > 0)
	{
		tab[j] = str[i - 1];
		i--;
		j++;
	}
	i = 0;
	while (i < j)
	{
		str[i] = tab[i];
		i++;
	}
	return (str);
}
