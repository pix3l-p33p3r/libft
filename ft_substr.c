/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:14:17 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/18 18:33:56 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strinstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (strlen - start >= len)
		strinstr = (char *)malloc ((len + 1) * sizeof(char));
	else
		strinstr = (char *) malloc ((strlen - start + 1) * sizeof(char));
	if (strinstr == NULL)
		return (NULL);
	ft_strlcpy(strinstr, (s + start), (len + 1));
	return (strinstr);
}
