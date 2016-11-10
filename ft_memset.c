/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:22:00 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/10 14:24:33 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	while (len)
	{
		*ptr = (unsigned char)c;
		len--;
		ptr++;
	}
	return (s);
}
