/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:41:21 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/10 16:29:07 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp_dst;
	unsigned const char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned const char *)src;
	while (n--)
	{
		tmp_dst++ = tmp_src++;
		if (*tmp_src == (unsigned char)c)
			return (tmp_dst);
	}
	return (NULL);
}
