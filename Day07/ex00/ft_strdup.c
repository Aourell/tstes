/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawilhel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:14:07 by mawilhel          #+#    #+#             */
/*   Updated: 2018/09/13 14:39:51 by mawilhel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char *dest;
	int i;

	dest = (char *)malloc(sizeof(str));
	i = -1;
	while (str[++i])
		dest[i] = str[i];
	return (dest);
}
