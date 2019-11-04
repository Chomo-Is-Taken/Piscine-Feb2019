/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:36:20 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 19:06:43 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32)
			i++;
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] -32;
		i++;
 	}
	return (str);
}

int main()
{
	char tab[] = "Hello // World";
	printf("%s",ft_strupcase(tab));
	return (0);
}
