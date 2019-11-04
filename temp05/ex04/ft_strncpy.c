/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:11:06 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/20 11:02:50 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main()
{
	printf("Fonction ft_strcmpy\n");
	char dest[] = "Yea I think so";
	char src[] = "this is a cool test, isn't it ?";
	ft_strncpy(dest, src, 2);
	printf("DESTINATION: %s\nSOURCE: %s\n",dest,src);
	char dest1[] = "Yea I think so";
	char src1[] = "this is a cool test, isn't it ?";
	strncpy(dest1, src1, 2);
	printf("Fonction strncmpy\n");
	printf("DESTINATION: %s\nSOURCE: %s\n",dest1,src1);
	return (0);
}
