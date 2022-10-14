/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:43 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/14 14:41:19 by elel-yak         ###   ########.fr       */
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
// src = NULL
// dst[10]; memcpy(dest, src, 7)
//dest = zeb
//(unsigned char)str[i]
// memcpy(dest, src, 10)
// char *src = "12345";
// dest = src + 2 ==> 345
// src = "12121" ==> "12123"
// memcpy(src + 2, src, 7); ==> ????12345/0/0
// printf("src");
//12123
