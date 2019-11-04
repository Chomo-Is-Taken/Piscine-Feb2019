/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:01:27 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/28 10:42:29 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_fake_strlen(char *str)
{
	int i;

	i = 0;
	while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			&& str[i] != '\0')
		str++;
	while (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			&& str[i] != '\0')
		i++;
	while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			&& str[i] != '\0')
		str++;
	return (i);
}

int		ft_count_words(char *str)
{
	int counter_strike;
	int i;

	i = 0;
	if (!str)
		return ((int)0);
	counter_strike = 0;
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
		if (str[i])
			counter_strike++;
		while (!(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
	}
	return (counter_strike);
}

char	**ft_split_whitespaces(char *str)
{
	int		number_of_words;
	char	*rekt;
	char	**outplayed;
	int		validay;
	int		i;

	validay = 0;
	number_of_words = ft_count_words(str);
	if ((outplayed = malloc(sizeof(char*) * (number_of_words + 1))) == NULL)
		return (NULL);
	while (validay < number_of_words)
	{
		i = 0;
		if ((rekt = malloc(sizeof(*rekt) * (ft_fake_strlen(str) + 1))) == NULL)
			return (NULL);
		while (str[0] && (str[0] == '\t' || str[0] == ' ' || str[0] == '\n'))
			str++;
		while (str[0] && !(str[0] == '\t' || str[0] == ' ' || str[0] == '\n'))
			rekt[i++] = *str++;
		rekt[i] = '\0';
		outplayed[validay++] = rekt;
	}
	outplayed[number_of_words] = 0;
	return (outplayed);
}
