#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int			main(int argc, char **argv)
{
	int		a;
	int		b;
	int		i;
	char	**square = malloc(sizeof (*square)*9);

	a = 1;
	i = 0;
	b = 0;
	while (i < 9)
	{
		square[i] = malloc (sizeof (**square)*9);
		i++;
	}
	while (a <= 9)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			square[a - 1][b] = argv[a][b];
			b++;
		}
		square[a - 1][b] = '\0';
		a++;
	}
	a = 0;
	while (a < 9)
	{
		b = 0;
		while (square[a][b] != '\0')
		{
			if (square[a][b] == '.')
			{
				square[a][b] = '0';
			}
			argc = square[a][b];
			write(1, &argc, 1);
			if (square[a][b + 1] != '\0')
				write(1, " ", 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
