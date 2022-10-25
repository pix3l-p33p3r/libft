/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:58 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/24 21:43:53 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	if (dstsize == 0 && !dst)
		return (0);
	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = d;
	if (dstsize <= d)
		return (s + dstsize);
	while (src[i] && i < dstsize - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (d + s);
}

// int main(void)
// {
// 	char src[] = "khiar";
// 	char dst[] = "Oussama ";
// 	int x = ft_strlcat(dst, src, 14);
// 	printf("%s\n%d", dst, x);
// 	return (0);
// }