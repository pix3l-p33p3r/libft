/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:43 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/12 09:59:35 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*x;
	char	*z;

	x = (char *)src;
	z = (char *)dest;
	while (n--)
	{
		*x = *z;
		x++;
		z++;
	}
	return (dest);
}
