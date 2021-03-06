/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:24:11 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/22 16:32:44 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < ((int)ft_strlen(s1) + (int)ft_strlen(s2)))
	{
		if (i < (int)ft_strlen(s1))
			tmp[i] = s1[i];
		else
		{
			tmp[i] = s2[j];
			j++;
		}
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
