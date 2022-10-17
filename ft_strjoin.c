/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:22:12 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/17 18:39:26 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	new_len = ft_strlen(s1) * (size - 1);
	i = 0;
	while (i < size)
	{
		new_len += ft_strlen(strs[i]);
		i++;
	}
	new_len++;
	new_str = (char *)malloc(sizeof(char) * new_len);
	new_str[0] = '\0';
	ft_strcpy(new_str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(new_str, s1);
		ft_strcat(new_str, strs[i]);
		i++;
	}
	return (new_str);
}
