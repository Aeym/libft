/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:56:27 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/22 17:01:29 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ispunct(int c)
{
	if ((c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) ||
			(c > 122 && c < 127))
		return (1);
	return (0);
}
