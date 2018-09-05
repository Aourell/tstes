/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 09:46:57 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/03 10:33:55 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	tmp;

	tmp = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	if (1 < nb)
		tmp = nb * ft_recursive_factorial(nb - 1);
	return (tmp);
}
