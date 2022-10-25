/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:14:17 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/25 19:55:44 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	while (i < len && *(s + i + start))
	{
		*(substr + i) = *(s + i + start);
		i++;
	}
	*(substr + i) = 0;
	return (substr);
}

// int main(void)
// {
// 	char s[] = "hello 424367";
// 	printf("%s\n", ft_substr(s, 5, ULONG_MAX));
// 	// printf("%s\n", substr(s, 5, 18446744073709551615UL));
// }
