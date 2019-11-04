/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:58:50 by jopaning          #+#    #+#             */
/*   Updated: 2019/02/19 19:56:35 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while ((s1[index] == s2[index] && (s1[index] != '\0' || s2[index] != '\0')))
	{
		if (index == n)
			return (0);
		index++;
	}
	return (s1[index] - s2[index]);
}

int	main()
{
	char tab1[] = "I iove k";
	char tab2[] = "I love kimbap";
	char tab3[] = "I iove k";
	char tab4[] = "I love kimbap";
	printf("strncmp %d\n", strncmp(tab2,tab1,3));
	printf("ft_strncmp %d", ft_strncmp(tab4,tab3,3));
	return (0);
}
