/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:14:00 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 13:09:16 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if ((*str == *to_find) && ft_test(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

int main()
{
	char str[] = "I love soccer lol";
	char find[] = "lol";
	printf("Strstr %s\n", strstr(str,find));
	char str1[] = "I love soccer lol";
	char find1[] = "lol";
	printf("ft_strstr %s\n", ft_strstr(str1,find1));
}
