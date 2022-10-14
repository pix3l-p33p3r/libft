/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:46 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/13 22:33:17 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
// char *src = "12345";
// dest = src + 2 ==> 345
// src = "12121" ==> "12123"
//memmove(src + 2, src, 3);