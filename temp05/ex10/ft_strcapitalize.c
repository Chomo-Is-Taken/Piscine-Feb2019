/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:49:45 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 19:08:27 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_filtre(char *str, int i)
{
	if (!((str[i] >= 65 && str[i] <= 90)
		|| (str[i] >= 97 && str[i] <= 122)
		|| (str[i] >= 48 && str[i] <= 57)))
			i++;
	if ((str[i] >= 97 && str[i] <= 122)
			&& (!((str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 97 && str[i - 1] <= 122)
			|| (str[i - 1] >= 48 && str[i - 1] <= 57))))
		{
			str[i] = str[i] - 32;
			i++;
		}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
			i++;
		}
		i = ft_filtre(str, i);
		if ((str[i] >= 65 && str[i] <= 90) && (((str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 97 && str[i - 1] <= 122)
			|| (str[i - 1] >= 48 && str[i - 1] <= 57)))) 
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
 	}
	return (str);
}

int main()
{
	char tab[] = "salut, comment tu vas ? 42mots quarante-deux; Cinquante+Et+En";
	printf("%s", ft_strcapitalize(tab));
	return (0);
}
