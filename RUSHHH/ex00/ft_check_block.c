/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:26:23 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:41:41 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_check_block2(int x, int y, int way)
{
	int		tmp_x;
	int		tmp_y;

	if (way == 1)
	{
		if (x < 3)
			tmp_x = 0;
		else
			tmp_x = (x < 6) ? 3 : 6;
		return (tmp_x);
	}
	else
	{
		if (y < 3)
			tmp_y = 0;
		else
			tmp_y = (y < 6) ? 3 : 6;
		return (tmp_y);
	}
	return (0);
}

int		ft_check_block(char **tab, int x, int y, int n)
{
	int		tmp_x;
	int		tmp_y;
	int		tmp_x2;
	int		tmp_y2;
	int		tmp;

	tmp_x = ft_check_block2(x, y, 1);
	tmp_y = ft_check_block2(x, y, 0);
	tmp_y2 = tmp_y;

	tmp = 0;
	tmp_y2--;
	while (++tmp_y2 < tmp_y + 3)
	{
		tmp_x2 = tmp_x - 1;
		while (++tmp_x2 < tmp_x + 3)
			if (tab[tmp_y2][tmp_x2] == n)
				tmp++;
		tmp_y2++;
	}
	return (tmp);
}
