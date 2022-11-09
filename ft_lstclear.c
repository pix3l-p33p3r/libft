/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:29:12 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/26 11:02:51 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!(lst && del))
		return ;
	while (*lst != 0)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}

// void    ft_del(void *content)
// {
//     printf("%s\n", content);
// }

// int main()
// {
//     t_list *head;
//     t_list *second;
//     t_list *third;
//     t_list *fourth;
//     t_list *ptr;
//     head = (t_list *)malloc(sizeof(t_list));
//     second = (t_list *)malloc(sizeof(t_list));
//     third = (t_list *)malloc(sizeof(t_list));
//     fourth = (t_list *)malloc(sizeof(t_list));
//     head->content = "one";
//     head->next = second;
//     second->content = "two";
//     second->next = third;
//     third->content = "three";
//     third->next = fourth;
//     fourth->content = "last";
//     fourth->next = NULL;

//     ft_lstclear(&head, ft_del);
// }