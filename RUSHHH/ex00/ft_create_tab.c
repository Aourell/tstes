/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:27:56 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:38:52 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		**ft_create_tab(char **argv)
{
	char	**tab;
	int		i;
	int		j;

	tab = (char **)malloc(sizeof(char *) * 9);
	j = -1;
	while (++j < 9)
	{
		tab[j] = (char *)malloc(sizeof(char) * 9);
		i = -1;
		while (argv[j + 1][++i])
			tab[j][i] = argv[j + 1][i];
		tab[j][9] = '\0';
	}
	return (tab);
}
