/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:52:27 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/12 10:41:08 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	j;

	argc = 0;
	j = 0;
	while (argv[argc][j] != '\0')
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
