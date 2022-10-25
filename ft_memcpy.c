/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:43 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/24 22:17:34 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*x;
	char	*z;
	size_t	i;

	i = 0;
	x = (char *)src;
	z = (char *)dest;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		z[i] = x[i];
		i++;
	}
	return (dest);
}
