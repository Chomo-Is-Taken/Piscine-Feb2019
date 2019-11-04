#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int		i;
	int		*range;
	int		min;
	int		max;

	if (argc != 3)
		printf("Usage: ./a.out [min] [max]\n");
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		printf("min=%d, max=%d, range=", min, max);
		range = ft_range(min, max);
		if (range)
		{
			printf("{ ");
			i = -1;
			while (++i < max - min)
			{
				printf("%d", range[i]);
				if (i < max - min - 1)
					printf(", ");
			}
			printf(" }\n");
		}
		else
			printf("(null)\n");
	}
	return (0);
}
