/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:17 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/18 16:15:22 by elel-yak         ###   ########.fr       */
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

// int	main()
// {
// 	void	*ret_calloc;
// 	void	*ret_ft_calloc;

// 	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
// 	ret_calloc = calloc(SIZE_MAX, SIZE_MAX);
// 	ret_ft_calloc = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	printf("ze3ter\n");
// 	if (!memcmp(0, 0, (1)))
// 		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
// 	else
// 		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
// 	free(ret_calloc);
// 	free(ret_ft_calloc);
// 	// printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// 	// usleep(250000);
// 	// printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
// 	// ret_calloc = calloc(0, 0);
// 	// ret_ft_calloc = ft_calloc(0, 0);
// 	// if (!ft_memcmp(ret_calloc, ret_ft_calloc, 0))
// 	// 	printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
// 	// else
// 	// 	printf("%s%s%s", RED, "[KO]\n", DEFAULT);
// 	// free(ret_calloc);
// 	// free(ret_ft_calloc);
// 	// printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// 	// usleep(250000);
// 	// printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
// 	return (EXIT_SUCCESS);
// }