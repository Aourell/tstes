/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:04:27 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/13 22:44:31 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	ft_strlowcase(str);
	while (str[++i] != '\0')
	{
		c = str[i];
		j = i + 1;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		if (((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) \
				&& str[j] >= 'a' && str[j] <= 'z')
			i++;
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		}
	}
	return (str);
}
