/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:43 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/19 19:49:09 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*x;
	unsigned char	*z;
	size_t			i;

	i = 0;
	x = (unsigned char *)src;
	z = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		z[i] = x[i];
		i++;
	}
	return (dest);
}
