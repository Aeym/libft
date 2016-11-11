/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:19:20 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/11 10:47:33 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (tmp == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			tmp[i] = src[i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
