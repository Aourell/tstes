/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:31:41 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/05 02:22:49 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int root;

	root = 1;
	if (nb <= 0)
		return (0);
	while (root * root < nb)
		root++;
	if (nb / root != root)
		return (0);
	return (root);
}