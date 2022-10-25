/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:38 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/25 17:24:47 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n--)
	{
		if (*x == (unsigned char)c)
			return ((char *)x);
		x++;
	}
	return (0);
}

int main()
{
   char *str;
 
   /* Stored in read only part of data segment */
   str = "GfG";   
 
   /* Problem:  trying to modify read only memory */
   str = "ngdf";
   printf("%s\n",str);
   return 0;
}
