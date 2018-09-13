/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:27:15 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:34:45 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_y(char **argv, int y, char who);
int		ft_check_x(char **argv, int x, char who);
int		ft_check_block(char **tab, int x, int y, int n);

int		ft_check(char **tab)
{
	int	i;
	int	j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			if (tab[i][j] != '.')
				if ((ft_check_y(tab, j, tab[i][j]) > 1) ||
						(ft_check_x(tab, i, tab[i][j]) > 1) ||
						(ft_check_block(tab, i, j, tab[i][j]) > 1))
					return (0);
	}
	return (1);
}
