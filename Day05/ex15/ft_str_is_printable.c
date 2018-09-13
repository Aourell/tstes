/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:36:01 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/11 21:12:37 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 33 && c <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}