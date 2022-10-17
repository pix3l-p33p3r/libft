/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:14:31 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/17 13:57:44 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	// ft_putendl_fd(0, -1);
// 	// ft_putendl_fd(0, 0);
// 	ft_putendl_fd("Hello world", 0);
// 	// ft_putendl_fd("Hello world", 1);
// 	// ft_putendl_fd("Hello world", 2);
// 	// if (1)
// 	// 	printf("\033[92mTest %2.i - OK \033[0m\n", 1);
// 	// else
// 	// 	printf("\033[91mTest %2.i - KO \033[0m\n", 1);
// 	return (0);
// }