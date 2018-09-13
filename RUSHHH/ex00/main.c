/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:30:23 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:30:50 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			main(int argc, char **argv)
{
	char	**tab;
	int		error;

	if (argc == 10)
	{
		if (!(error = ft_check_caract(argv)))
			ft_error();
		if (error)
		{
			tab = ft_create_tab(argv);
			if (tab && (!ft_check(tab) || !ft_resolve(tab, 0, 0, 0)))
				ft_error();
		}
	}
	else
		ft_error();
	return (0);
}
