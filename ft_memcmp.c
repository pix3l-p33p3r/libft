/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:40 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/12 09:55:23 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*x;
	char	*z;

	x = (char *)s1;
	z = (char *)s2;
	while (n--)
	{
		if (*x != *z)
			return ((int)(*x - *z));
		x++;
		z++;
	}
	return (0);
}
