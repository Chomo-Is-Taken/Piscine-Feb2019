/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:24:17 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/18 16:38:33 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[] = "012345";
	char src[] = "1846315";
	printf("%s\n",strncat(dest,src, 4));
	char dest1[] = "012345";
	char src1[] = "1846315";
	printf("%s",ft_strncat(dest1, src1, 4));
	return (0);
}
