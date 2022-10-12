/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:46 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/12 09:58:21 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

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
