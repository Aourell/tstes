#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_check_legs(char **tab, int y, int x, int n)
{
	int	tmp_x;
	int	tmp_y;

	tmp_x = 0;
	tmp_y = 0;
	while (tmp_x <= 8)
	{
		if (tab[y][tmp_x] == n)
			return (0);
		tmp_x++;
	}
	while (tmp_y <= 8)
	{
		if (tab[tmp_y][x] == n)
			return (0);
		tmp_y++;
	}
	return (1);
}

int	ft_check_butt(char **tab, int y, int x, int n)
{
	int	tmp_x;
	int	tmp_y;
	int	tmp_x2;
	int	tmp_y2;

	tmp_x = x - (x % 2);
	tmp_y = y - (y % 2);
	tmp_x2 = tmp_x;
	tmp_y2 = tmp_y;
	while (tmp_y <= (tmp_y2 + 2))
	{
		while (tmp_x2 < (tmp_x + 2))
		{
			if (tab[tmp_y2][tmp_x2] == n)
				return (0);
			tmp_y2++;
		}
		tmp_x2++;
	}
	return (1);
}

int	ft_test(char **tab, int y, int x/*int position_sugar_daddy*/, char your_step_brother)
{
//	int	y;
//	int	x;
	int check;

	check = 0;
//	y = position_sugar_daddy / 10;
//	x = position_sugar_daddy % 10;
	if (tab[y][x] == '0')
	{
		if (ft_check_legs(tab, y, x, your_step_brother) == 1)
			check = 1;
		if (ft_check_butt(tab, y, x, your_step_brother) == 1)
			check = check + 1;
	}
	if (check == 1 || check == 0)
		return (0);
	else
		return (1);
}

int	ft_your_mum(char **tab, int y, int x/*int position_sugar_daddy*/, char your_step_brother)
{
	if (ft_test(tab, y, x/*position_sugar_daddy*/, your_step_brother)  == 1)
		return(1);
	return (0);
}


int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;
	int	position_sugar_daddy;
	char	your_step_brother;
	char	**square = malloc(sizeof (*square)*9);

	a = 1;
	i = 0;
	b = 0;
	argc = 1;
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
	a = 1;
	b = 1;
	your_step_brother = 1;
	position_sugar_daddy = a * 10 + b;
	printf("\n%d", ft_your_mum(square, 1, 0/*position_sugar_daddy*/, your_step_brother));
	
	write(1, "\n", 1);

	int

	return (0);
}
