/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 00:30:34 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/01 08:54:40 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printnb(int nb)
{
	int		d;
	int		u;

	d = nb / 10;
	u = nb % 10;
	if (nb > 9)
		ft_putchar(d + 48);
	else
		ft_putchar('0');
	ft_putchar(u + '0');
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_printnb(nb1);
			ft_putchar(' ');
			ft_printnb(nb2);
			if (nb1 != 98 || nb2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}
