/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:13:02 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/17 12:54:10 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd;

// 	fd = open("TEST", O_CREAT | O_RDWR, 0666);
// 	ft_putchar_fd('z', fd);
// 	ft_putchar_fd('b', fd);
// 	ft_putchar_fd('i', fd);
// 	ft_putchar_fd(' ', fd);
// 	ft_putchar_fd('k', fd);
// 	ft_putchar_fd('b', fd);
// 	ft_putchar_fd('i', fd);
// 	ft_putchar_fd('r', fd);
// 	printf("%d\n", fd);
// 	close(fd);
// }