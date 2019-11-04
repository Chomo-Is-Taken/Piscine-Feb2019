/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:14:23 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/18 16:22:28 by jopaning         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src, int i)
{
	int j;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(dest);
	dest = ft_strcpy(dest, src, i);
	return (dest);
}

int	main()
{
	char dest[] = "012345";
	char src[] = "1846315";
	printf("%s\n",strcat(dest,src));
	char dest1[] = "012345";
	char src1[] = "1846315";
	printf("%s",ft_strcat(dest1,src1));
	return (0);
}
