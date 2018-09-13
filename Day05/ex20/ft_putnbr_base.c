/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:01:49 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/13 14:11:53 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c);

int					ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void				ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	nb;

	size = ft_strlen(base);
	if (size > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		nb = nbr;
		if (nb > (size - 1))
		{
			ft_putnbr_base((nb / size), base);
		}
		ft_putchar(base[nb % size]);
	}
}
