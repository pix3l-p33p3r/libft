/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:43 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/12 19:42:59 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*x;
	unsigned char	*z;
	int				i;

	i = 0;
	x = (unsigned char *)src;
	z = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < (int)n)
	{
		z[i] = x[i];
		i++;
	}
	return (dest);
}
/*int main ()
{
	char *s = malloc (sizeof (int) * 10); 
	char *s2 = "";
	printf ("Res--> {%s} \n" , ft_memcpy(s, s2, ft_strlen (s2)));
	printf ("res--> {%s}\n", s);
	return (0);
}*/