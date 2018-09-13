/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:58:36 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/11 21:10:56 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
