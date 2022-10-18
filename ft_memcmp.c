/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:40 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/17 22:34:16 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*z;

	x = (unsigned char *)s1;
	z = (unsigned char *)s2;
	while (n--)
	{
		if (*x != *z)
			return ((int)(*x - *z));
		x++;
		z++;
	}
	return (0);
}
