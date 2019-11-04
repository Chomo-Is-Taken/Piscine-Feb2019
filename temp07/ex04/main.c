#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		while (*tab)
		{
			printf("%s\n", *tab);
			tab++;
		}
	}
	return (0);
}
