#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac == 3)
	{
		tab = ft_split(av[1], av[2]);
		i = 0;
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
	return (0);
}
