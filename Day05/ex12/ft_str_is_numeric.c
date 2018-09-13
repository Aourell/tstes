/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:16:40 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/13 18:34:06 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 48 && c <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}