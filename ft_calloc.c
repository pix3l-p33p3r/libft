/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:17 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/18 18:40:50 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count >= (size_t) - 1 / size)
		return (0);
	p = malloc (size * count);
	if (p == 0)
		return (p);
	ft_bzero (p, count * size);
	return (p);
}
