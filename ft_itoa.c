/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:42:38 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/24 22:09:05 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	int		digit;

	num = n;
	digit = digit_count(n);
	if (n < 0)
	{
		num *= -1;
		digit++;
	}
	result = malloc(digit + 1);
	if (!result)
		return (0);
	result[digit] = '\0';
	while (digit--)
	{
		result[digit] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(0000000001));
// }
