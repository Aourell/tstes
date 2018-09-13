/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:11:12 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 22:31:45 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_resolve(char **tab);
char	**ft_create_tab(char ** argv);
void	ft_check(char **tab);
void	ft_put_error(char *str);

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	char **tab;

	i = 1;
	while(argv[i] != '\0')
	{
		j = 0;
		while(argv[i][j] != '\0')
			if(argv[i][j] != '.' && (argv[i][j] > '9' || argv[i][j] < '1'))
				ft_put_error("Error\n");
		if (j != 9)
			ft_put_error("Error\n");
	}
	if (argc == 10)
	{
		tab = ft_create_tab(argv);
		ft_check(tab);
		ft_resolve(tab);
		ft_put_error("Error\n");
	}
	else
		ft_put_error("Error\n");
	return (0);
}
