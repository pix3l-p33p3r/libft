/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:13:45 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/17 11:23:39 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

// int main()
// {
// 	int fd;
// 	char s[9] = "zbi kbir";

// 	fd = open("TEST", O_CREAT | O_RDWR, 0666);
// 	ft_putstr_fd(s, fd);
// 	printf("%d\n", fd);
// 	close(fd);
// }