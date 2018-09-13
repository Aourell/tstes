/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:18:09 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/11 15:15:24 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_put_sort_argv(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			ft_putchar(argv[i][j]);
		}
		ft_putchar('\n');
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	argc = 0;
	while (argv[argc] != '\0')
		argc++;
	argc--;
	while (argc != 0)
	{
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) >= 1)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	ft_put_sort_argv(argv);
	return (0);
}
