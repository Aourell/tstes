/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:32:19 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 22:53:46 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_check_resolve(char **tab, int i, int j, int number);

int	ft_resolve(char **tab, int i, int j, int number)
{
	i = -1;
	while(tab[++i])
	{
		j = -1;
		while (tab[i][++j])
		{
			if (tab[i][j] == '.')
			{
				number = -1;
				while (++number <= 9)
				{
					if (!ft_check_resolve(tab, i, j, number))
					{
						if (!ft_resolve(tab, 0, 0, 0))
							tab[i][j] = '.';
						else
							print_square(tab);
					}
					tab[i][j] = '.';
				}
				return (0);
			}
		}
	}
	return (1);
}
