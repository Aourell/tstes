/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_caract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:59:16 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:03:15 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_error(char *str);

void	ft_check_caract(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while(argv[i] != '\0')
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] != '.' && (argv[i][j] > '9' || argv[i][j] < 'i'))
				ft_put_error("Error\n");
			j++;
		}
		if (j != 9)
			ft_put_error("Error\n");
		i++;
	}
}
