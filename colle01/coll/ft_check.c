# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_check                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 22:54:50 by mawilhel          #+#    #+#              #
#    Updated: 2018/09/09 22:58:55 by mawilhel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void	print_square(char **tab)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (j < 8)
				tmp = ' ';
			else
				tmp = '\n';
			write(1, &tab[i][j], 1);
			write(1, &tmp, 1);
			j++;
		}
		i++;
	}
}
