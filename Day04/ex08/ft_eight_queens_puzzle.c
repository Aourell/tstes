/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:52:04 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/06 11:50:07 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_diag(char **tab, int x, int y)
{
	int	tmp_x;
	int	tmp_y;

	tmp_x = 0;
	tmp_y = 0;
	while (tmp_x < (x + y) || tmp_y < 7)
		tmp_x++;
	while ((tmp_y + 7) < (x + y))
		tmp_y--;
	while (tmp_x >= 0 || tmp_y <= 7)
	{
		if (tab[tmp_y, tmp_x] == 'D')
			return(0);
		tmp_x--;
		tmp_y++;
	}
	
	return (1);
}

int	ft_back(char *tab, int y, int x, int sol)
{
	while (x <= 7)
	{
		if (ft_check(tab, y, x) == 1 && y == 7)
		{
			sol++;
			return (1);
		}
		if (ft_check(tab, y, x) == 1)
		{
			tab[y][x] = 'D';
			ft_back(tab, x, y + 1);
		}
	}
}

int	ft_eight_queens_puzzle(void)
{
	int	x;
	int	y;
	char tab[8][8];
	int sol;

	x = 0;
	y = 0;
	sol = 0;
	ft_back(*tab, y, x, sol);
	return (sol);
}
