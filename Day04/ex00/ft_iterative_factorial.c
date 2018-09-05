/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:54:56 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/03 10:36:11 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		tmp = tmp * i;
		i++;
	}
	return (tmp);
}
