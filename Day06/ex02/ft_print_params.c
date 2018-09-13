/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:14:20 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/11 15:15:03 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	j;

	argc = 0;
	while (argv[++argc])
	{
		j = -1;
		while (argv[argc][++j])
		{
			ft_putchar(argv[argc][j]);
		}
		ft_putchar('\n');
	}
}
