/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:16:25 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/22 22:42:00 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int main(void)
{
// 	printf("%s\n", "42\n");
// 	printf("%s\n", ft_substr("hello\n", 0, ULONG_MAX));
// 	printf("%s\n", "42");
// 	printf("%s\n", ft_substr("hello\n", 0, 9223372036854775807));
// 	printf("%s\n", "42");
// 	printf("%s\n", ft_substr("hello", 0, 18446744073709551615));
// 	printf("%s\n", ft_substr("hello\n", 0, -1));
// 	size_t a;

// 	a = -1;
// 	printf("%lu", a);
// }
// int main(){
//     char    src[] = "hola";
//     char    *dest;

//     dest = src + 1;

//     ft_memmove(src, dest, 42);
//     printf("%s", dest);
// }


	// unsigned char x = 0;
	// unsigned char y = 1;
	// printf("%u\n", x - y);
	// char z[] = "dd";
	// char s[] = "hello 42";
	// printf("%zu\n", ft_strlcat(z, s, 5));
	char z[] = "abcdef";
	char s[] = "abcdef";
	char *ret = ft_strjoin(z, s);
	printf("%s\n", ret);
}
