/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:13:10 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/16 16:56:48 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	j = 0;
	while (j < len && len != 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			i = 1;
			while (needle[i] == haystack[i] && needle[i] && j + i < len)
				i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		haystack++;
		j++;
	}
	return (0);
}
