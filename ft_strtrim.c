/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:43:59 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/14 16:17:44 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	size_t	len;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (s[i]!= ' ' && s[i] != '\t' && s[i] != '\n')
	{
		if (s[i]
	}

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
