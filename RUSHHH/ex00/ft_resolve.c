/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:29:15 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:42:36 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_while(char **tab, int i, int j, int number)
{
	int		result;

	while (++number <= 9)
	{
		if (!ft_check_resolve(tab, i, j, number))
		{
			tab[j][i] = number + 48;
			result = ft_resolve(tab, 0, 0, 0);
			if (result == 0)
				tab[j][i] = '.';
			else
				return (result);
		}
	}
	return (0);
}


int			ft_resolve(char **tab, int i, int j, int number)
{
	int		result;

	j = -1;
	while(tab[++j])
	{
		i = -1;
		while(tab[j][++i])
		{
			if (tab[j][i] == '.')
			{
				result = ft_while(tab, i, j, number);
				if (result == -1 || result == 1)
				{
					if (result == -1)
						print_square(tab);
					return (1);
				}
				return (0);
			}
		}
	}
	return (-1);
}
