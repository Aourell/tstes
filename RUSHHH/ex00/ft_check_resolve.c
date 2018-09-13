/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_resolve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:28:48 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/09 23:29:08 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_resolve(char **tab, int i, int j, int number)
{
	int	res;

	res = 0;
	res = ft_check_x(tab, i, number + 48);
	res += ft_check_y(tab, j, number + 48);
	res += ft_check_block(tab, i, j, number + 48);
	return (res);
}
