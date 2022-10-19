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
// 	ft_putchar_fd('h', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('o', fd);
// 	ft_putchar_fd(' ', fd);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('2', fd);
// 	printf("%d\n", fd);
// 	close(fd);
// }
