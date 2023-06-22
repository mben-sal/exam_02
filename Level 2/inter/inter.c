#include <unistd.h>

#include <unistd.h>
#include <stdio.h>

int	search_char(int len, char *str)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[len] == str[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i] && search_char(i, argv[1]))
				{
					write(1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
