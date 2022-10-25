/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:42:52 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/25 20:48:55 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

// int main()
// {
//     t_list *ptr;

//     ptr = ft_lstnew('E');
//     printf("%c", ptr->content);
// }