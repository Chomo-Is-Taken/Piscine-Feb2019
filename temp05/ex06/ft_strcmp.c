/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:54:18 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 17:22:50 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0' || s2[index] != '\0'))
		index++;
	return (s1[index] - s2[index]);
}

int main(void)
{
	char tab1[] = "I love sushi";
	char tab2[] = "I love kimbap";
	char tab3[] = "I love sushi";
	char tab4[] = "I love kimbap";
	printf("strncmp %d\n", strcmp(tab1,tab2));
	printf("ft_strncmp %d", ft_strcmp(tab3,tab4));
	return (0);
}
