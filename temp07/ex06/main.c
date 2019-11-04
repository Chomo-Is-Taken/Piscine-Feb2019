#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	if (argc == 4)
	{
		nbr = argv[1];
		base_from = argv[2];
		base_to = argv[3];
		printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	}
	return (0);
}
