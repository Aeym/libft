/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:03:57 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/13 16:10:03 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	if (c == '\0')
		return (str + i);
	while (--i >= 0)
	{
		if (str[i] == c)
			return (str + i);
	}
	return (NULL);
}
