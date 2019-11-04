/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:11:06 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/16 15:51:07 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	printf("Fonction ft_strcmpy\n");
	char dest[] = "Hellow";
	char src[] = "HELLO";
	ft_strcpy(src, dest);
	printf("DESTINATION%s\nSOURCE%s\n",dest,src);
	char dest1[] = "Hellow";
	char src1[] = "HELLO";
	strcpy(src1, dest1);
	printf("Fonction strcmpy\n");
	printf("DESTINATION%s\nSOURCE%s\n",dest1,src1);
	return (0);
}
