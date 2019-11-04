/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:15:21 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/27 10:17:04 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str_cpy;
	int		lenght;
	int		i;

	i = 0;
	lenght = ft_strlen(src);
	if ((str_cpy = malloc(sizeof(*str_cpy) * (lenght + 1))) == NULL)
		return (NULL);
	while (src[i])
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
